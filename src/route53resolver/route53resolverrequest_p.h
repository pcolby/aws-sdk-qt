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

#ifndef QTAWS_ROUTE53RESOLVERREQUEST_P_H
#define QTAWS_ROUTE53RESOLVERREQUEST_P_H

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverRequest;

class Route53ResolverRequestPrivate {

public:
    Route53ResolverRequest::Action action; ///< Route53Resolver action to be performed.
    QString apiVersion;        ///< Route53Resolver API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53Resolver request (query string) parameters. @todo?

    Route53ResolverRequestPrivate(const Route53ResolverRequest::Action action, Route53ResolverRequest * const q);
    Route53ResolverRequestPrivate(const Route53ResolverRequestPrivate &other, Route53ResolverRequest * const q);

    static QString toString(const Route53ResolverRequest::Action &action);

protected:
    Route53ResolverRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(Route53ResolverRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
