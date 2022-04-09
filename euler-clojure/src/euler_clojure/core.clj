(ns euler-clojure.core
  (:gen-class))

(defn prob_1_precalculated
  "Problem 1: precalculated solution using the Gaussian sum formula"
  []
  (+ (* 3 333 167)
     (* 5 199 100)
     (* -15 33 67)))


(defn prob_1_filtered
  "Problem 1: filter a range and reduce it"
  []
  (let [div_by_3_or_5?
        (fn [x]
          (or (== (mod x 3) 0)
              (== (mod x 5) 0)))]

    (reduce + (filter div_by_3_or_5? (range 1000)))))


(defn -main
  "I don't do a whole lot ... yet."
  [& args]
  (println "Solution to problem 1:")
  (println (prob_1_precalculated))
  (println (prob_1_filtered)))
