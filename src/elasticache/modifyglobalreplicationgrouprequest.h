// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_MODIFYGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT ModifyGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    ModifyGlobalReplicationGroupRequest(const ModifyGlobalReplicationGroupRequest &other);
    ModifyGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
