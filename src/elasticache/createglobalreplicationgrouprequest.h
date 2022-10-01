// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_CREATEGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT CreateGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    CreateGlobalReplicationGroupRequest(const CreateGlobalReplicationGroupRequest &other);
    CreateGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
