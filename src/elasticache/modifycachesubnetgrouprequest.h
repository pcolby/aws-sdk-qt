// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHESUBNETGROUPREQUEST_H
#define QTAWS_MODIFYCACHESUBNETGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheSubnetGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT ModifyCacheSubnetGroupRequest : public ElastiCacheRequest {

public:
    ModifyCacheSubnetGroupRequest(const ModifyCacheSubnetGroupRequest &other);
    ModifyCacheSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCacheSubnetGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
