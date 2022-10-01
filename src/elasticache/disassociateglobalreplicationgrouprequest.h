// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPREQUEST_H
#define QTAWS_DISASSOCIATEGLOBALREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DisassociateGlobalReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DisassociateGlobalReplicationGroupRequest : public ElastiCacheRequest {

public:
    DisassociateGlobalReplicationGroupRequest(const DisassociateGlobalReplicationGroupRequest &other);
    DisassociateGlobalReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateGlobalReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
