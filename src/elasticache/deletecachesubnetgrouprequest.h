// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESUBNETGROUPREQUEST_H
#define QTAWS_DELETECACHESUBNETGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSubnetGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheSubnetGroupRequest : public ElastiCacheRequest {

public:
    DeleteCacheSubnetGroupRequest(const DeleteCacheSubnetGroupRequest &other);
    DeleteCacheSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheSubnetGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
