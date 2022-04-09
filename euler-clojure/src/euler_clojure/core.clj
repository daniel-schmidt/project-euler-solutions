(ns euler-clojure.core
  (:gen-class))

(defn prob_1_precalculated
  "Solution of first problem by analytical calculation using the Gaussian sum formula."
  []
  (+ (* 3 333 167)
     (* 5 199 100)
     (* -15 33 67)))


(defn -main
  "I don't do a whole lot ... yet."
  [& args]
  (println "Solution to problem 1:")
  (println (prob_1_precalculated)))
