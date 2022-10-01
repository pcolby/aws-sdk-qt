// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICACOUNTRESPONSE_H
#define QTAWS_INCREASEREPLICACOUNTRESPONSE_H

#include "elasticacheresponse.h"
#include "increasereplicacountrequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseReplicaCountResponsePrivate;

class QTAWSELASTICACHE_EXPORT IncreaseReplicaCountResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    IncreaseReplicaCountResponse(const IncreaseReplicaCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IncreaseReplicaCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseReplicaCountResponse)
    Q_DISABLE_COPY(IncreaseReplicaCountResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
