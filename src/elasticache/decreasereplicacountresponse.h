// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICACOUNTRESPONSE_H
#define QTAWS_DECREASEREPLICACOUNTRESPONSE_H

#include "elasticacheresponse.h"
#include "decreasereplicacountrequest.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseReplicaCountResponsePrivate;

class QTAWSELASTICACHE_EXPORT DecreaseReplicaCountResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DecreaseReplicaCountResponse(const DecreaseReplicaCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DecreaseReplicaCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecreaseReplicaCountResponse)
    Q_DISABLE_COPY(DecreaseReplicaCountResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
