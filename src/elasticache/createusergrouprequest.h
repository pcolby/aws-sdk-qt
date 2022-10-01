// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERGROUPREQUEST_H
#define QTAWS_CREATEUSERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateUserGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT CreateUserGroupRequest : public ElastiCacheRequest {

public:
    CreateUserGroupRequest(const CreateUserGroupRequest &other);
    CreateUserGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
