// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERGROUPREQUEST_H
#define QTAWS_MODIFYUSERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT ModifyUserGroupRequest : public ElastiCacheRequest {

public:
    ModifyUserGroupRequest(const ModifyUserGroupRequest &other);
    ModifyUserGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyUserGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
