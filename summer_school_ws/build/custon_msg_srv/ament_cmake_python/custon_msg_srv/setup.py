from setuptools import find_packages
from setuptools import setup

setup(
    name='custon_msg_srv',
    version='0.0.0',
    packages=find_packages(
        include=('custon_msg_srv', 'custon_msg_srv.*')),
)
