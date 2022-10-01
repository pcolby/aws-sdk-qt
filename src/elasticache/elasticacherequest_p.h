// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICACHEREQUEST_P_H
#define QTAWS_ELASTICACHEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ElastiCacheRequest;

class ElastiCacheRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElastiCacheRequest::Action action; ///< ElastiCache action to be performed.
    QString apiVersion;        ///< ElastiCache API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElastiCache request (query string) parameters. @todo?

    ElastiCacheRequestPrivate(const ElastiCacheRequest::Action action, ElastiCacheRequest * const q);
    ElastiCacheRequestPrivate(const ElastiCacheRequestPrivate &other, ElastiCacheRequest * const q);

    static QString toString(const ElastiCacheRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElastiCacheRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
