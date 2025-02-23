from setuptools import find_packages
from setuptools import setup

setup(
    name='info_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('info_interfaces', 'info_interfaces.*')),
)
