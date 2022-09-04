(ns euler-clojure.prob-2)

(defn fib_sum
  "Sum of even Fibonacci numbers"
  [prev_2 prev sum term_max]
  (let [cur (+ prev_2 prev)]
    (println cur sum)
    (if (<= cur term_max) 
      (let [next_sum (if (even? cur) (+ sum cur) sum)]
        (fib_sum prev cur next_sum term_max))
      sum)))

(defn filtered
  "Problem 2: Sum of even-valued Fibonacci numbers"
  [term_max]
  (fib_sum 1 2 2 term_max))