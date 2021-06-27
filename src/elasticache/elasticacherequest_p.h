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

#ifndef QTAWS_ELASTICACHEREQUEST_P_H
#define QTAWS_ELASTICACHEREQUEST_P_H

namespace QtAws {
namespace ElastiCache {

class ElastiCacheRequest;

class ElastiCacheRequestPrivate {

public:
    ElastiCacheRequest::Action action; ///< ElastiCache action to be performed.
    QString apiVersion;        ///< ElastiCache API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElastiCache request (query string) parameters. @todo?

    ElastiCacheRequestPrivate(const ElastiCacheRequest::Action action, ElastiCacheRequest * const q);
    ElastiCacheRequestPrivate(const ElastiCacheRequestPrivate &other, ElastiCacheRequest * const q);

    static QString toString(const ElastiCacheRequest::Action &action);

protected:
    ElastiCacheRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(ElastiCacheRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
