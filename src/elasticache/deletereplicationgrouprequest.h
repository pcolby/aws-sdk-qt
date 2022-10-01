// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONGROUPREQUEST_H
#define QTAWS_DELETEREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DeleteReplicationGroupRequest : public ElastiCacheRequest {

public:
    DeleteReplicationGroupRequest(const DeleteReplicationGroupRequest &other);
    DeleteReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
