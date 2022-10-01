// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_FAILOVERGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class FailoverGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT FailoverGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    FailoverGlobalReplicationGroupRequest(const FailoverGlobalReplicationGroupRequest &other);
    FailoverGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
