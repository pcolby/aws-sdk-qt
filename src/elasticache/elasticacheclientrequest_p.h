/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICACHECLIENTREQUEST_P_H
#define QTAWS_ELASTICACHECLIENTREQUEST_P_H

#include "elasticache_p.h"
#include "request.h"

namespace AWS {

namespace ElastiCache {

class ElastiCacheClientRequest;

class QTAWS_EXPORT ElastiCacheClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ElastiCacheClientRequest::Action action; ///< ElastiCache action to be performed.
    QString apiVersion;        ///< ElastiCache API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElastiCache request (query string) parameters. @todo?

    ElastiCacheClientRequestPrivate(const ElastiCacheClientRequest::Action action, ElastiCacheClientRequest * const q);
    ElastiCacheClientRequestPrivate(const RequestPrivate &other, ElastiCacheClientRequest * const q);

    static QString toString(const ElastiCacheClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElastiCacheClientRequest)

};

} // namespace ElastiCache
} // namespace AWS

#endif
