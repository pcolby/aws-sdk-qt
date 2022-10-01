// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICACHECLIENT_P_H
#define QTAWS_ELASTICACHECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ElastiCache {

class ElastiCacheClient;

class ElastiCacheClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ElastiCacheClientPrivate(ElastiCacheClient * const q);

private:
    Q_DECLARE_PUBLIC(ElastiCacheClient)
    Q_DISABLE_COPY(ElastiCacheClientPrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
