// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICACOUNTREQUEST_H
#define QTAWS_INCREASEREPLICACOUNTREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseReplicaCountRequestPrivate;

class QTAWSELASTICACHE_EXPORT IncreaseReplicaCountRequest : public ElastiCacheRequest {

public:
    IncreaseReplicaCountRequest(const IncreaseReplicaCountRequest &other);
    IncreaseReplicaCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseReplicaCountRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
