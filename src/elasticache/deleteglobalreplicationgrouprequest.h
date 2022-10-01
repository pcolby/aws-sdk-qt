// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_DELETEGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DeleteGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    DeleteGlobalReplicationGroupRequest(const DeleteGlobalReplicationGroupRequest &other);
    DeleteGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
