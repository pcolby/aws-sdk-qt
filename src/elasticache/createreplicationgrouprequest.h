// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONGROUPREQUEST_H
#define QTAWS_CREATEREPLICATIONGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateReplicationGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT CreateReplicationGroupRequest : public ElastiCacheRequest {

public:
    CreateReplicationGroupRequest(const CreateReplicationGroupRequest &other);
    CreateReplicationGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
