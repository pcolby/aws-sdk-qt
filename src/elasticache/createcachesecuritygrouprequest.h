// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESECURITYGROUPREQUEST_H
#define QTAWS_CREATECACHESECURITYGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSecurityGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheSecurityGroupRequest : public ElastiCacheRequest {

public:
    CreateCacheSecurityGroupRequest(const CreateCacheSecurityGroupRequest &other);
    CreateCacheSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheSecurityGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
