/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_FSXREQUEST_P_H
#define QTAWS_FSXREQUEST_P_H

namespace QtAws {
namespace FSx {

class FSxRequest;

class FSxRequestPrivate {

public:
    FSxRequest::Action action; ///< FSx action to be performed.
    QString apiVersion;        ///< FSx API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< FSx request (query string) parameters. @todo?

    FSxRequestPrivate(const FSxRequest::Action action, FSxRequest * const q);
    FSxRequestPrivate(const FSxRequestPrivate &other, FSxRequest * const q);

    static QString toString(const FSxRequest::Action &action);

protected:
    FSxRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(FSxRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
