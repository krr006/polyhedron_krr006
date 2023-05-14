from pytest import approx
from math import sqrt
from shadow.polyedr import Polyedr

class TestPolyedr:

    def test_polyedr_1(self):
        assert Polyedr(f"data/test1.geom").invisible_area() == approx(2.0)

    def test_polyedr_2(self):
        assert Polyedr(f"data/test2.geom").invisible_area() == approx(9.0)

    def test_polyedr_3(self):
        assert Polyedr(f"data/test3.geom").invisible_area() == 0.0

    def test_polyedr_4(self):
        assert Polyedr(f"data/test4.geom").invisible_area() == 0.0

    def test_polyedr_5(self):
        assert Polyedr(f"data/test5.geom").invisible_area() == approx(2.0)

    def test_polyedr_6(self):
        assert Polyedr(f"data/test6.geom").invisible_area() == 0.0

    def test_polyedr_7(self):
        assert Polyedr(f"data/test7.geom").invisible_area() == approx(2.0)

    # python -B -m pytest -p no:cacheprovider tests/test_polyedr.py