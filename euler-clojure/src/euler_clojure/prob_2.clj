(ns euler-clojure.prob-2)

(defn fib_recur
  "Basic recursion relation for Fibonacci numbers"
  [prev_2 prev]
  (+ prev_2 prev))

(defn add_if_even
  "updates the sum by current value"
  [sum cur]
  (if (even? cur)
    (+ sum cur)
    sum))

(defn sum_recursive
  "Sums terms of a recursion relation as long as the terms are smaller
   than term_max"
  [recur_rel update prev_2 prev sum term_max]
  (let [cur (recur_rel prev_2 prev)]
    (println cur sum)
    (if (<= cur term_max)
      (let [next_sum (update sum cur)]
        (sum_recursive recur_rel update prev cur next_sum term_max))
      sum)))

(defn filtered
  "Problem 2: Sum of even-valued Fibonacci numbers"
  [term_max]
  (sum_recursive fib_recur add_if_even 1 2 2 term_max))


(defn even_recur
  "Recursion relation for even Fibonacci numbers"
  [prev_2 prev]
  (+ prev_2 (* 4 prev)))

(defn even_only
  "Problem 2: more efficient solution calculating only the even Fibonacci numbers"
  [term_max]
  (sum_recursive even_recur + 2 8 10 term_max))