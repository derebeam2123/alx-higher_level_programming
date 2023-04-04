#!/usr/bin/python3
"""Defin about ALX ."""
class lockedclass:
    """
    preven the user from intasanting new lockclass for anything but attributes called 'firs_name;.
    """
    __slots__ = ["first_name"]
