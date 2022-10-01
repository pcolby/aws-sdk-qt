// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHEPARAMETERGROUPREQUEST_H
#define QTAWS_MODIFYCACHEPARAMETERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheParameterGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT ModifyCacheParameterGroupRequest : public ElastiCacheRequest {

public:
    ModifyCacheParameterGroupRequest(const ModifyCacheParameterGroupRequest &other);
    ModifyCacheParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
