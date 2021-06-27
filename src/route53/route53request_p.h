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

#ifndef QTAWS_ROUTE53REQUEST_P_H
#define QTAWS_ROUTE53REQUEST_P_H

namespace QtAws {
namespace Route53 {

class Route53Request;

class Route53RequestPrivate {

public:
    Route53Request::Action action; ///< Route53 action to be performed.
    QString apiVersion;        ///< Route53 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53 request (query string) parameters. @todo?

    Route53RequestPrivate(const Route53Request::Action action, Route53Request * const q);
    Route53RequestPrivate(const Route53RequestPrivate &other, Route53Request * const q);

    static QString toString(const Route53Request::Action &action);

protected:
    Route53Request * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(Route53Request)

};

} // namespace Route53
} // namespace QtAws

#endif
