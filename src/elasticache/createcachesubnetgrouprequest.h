// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESUBNETGROUPREQUEST_H
#define QTAWS_CREATECACHESUBNETGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSubnetGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheSubnetGroupRequest : public ElastiCacheRequest {

public:
    CreateCacheSubnetGroupRequest(const CreateCacheSubnetGroupRequest &other);
    CreateCacheSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheSubnetGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
