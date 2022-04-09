(ns euler-clojure.prob-1)

(defn precalculated
  "Problem 1: precalculated solution using the Gaussian sum formula"
  []
  (+ (* 3 333 167)
     (* 5 199 100)
     (* -15 33 67)))


(defn filtered
  "Problem 1: filter a range and reduce it"
  []
  (let [div_by_3_or_5?
        (fn [x]
          (or (== (mod x 3) 0)
              (== (mod x 5) 0)))]

    (reduce + (filter div_by_3_or_5? (range 1000)))))