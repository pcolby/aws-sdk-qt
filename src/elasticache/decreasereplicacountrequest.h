// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICACOUNTREQUEST_H
#define QTAWS_DECREASEREPLICACOUNTREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DecreaseReplicaCountRequestPrivate;

class QTAWSELASTICACHE_EXPORT DecreaseReplicaCountRequest : public ElastiCacheRequest {

public:
    DecreaseReplicaCountRequest(const DecreaseReplicaCountRequest &other);
    DecreaseReplicaCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecreaseReplicaCountRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
