// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPARAMETERGROUPREQUEST_H
#define QTAWS_CREATECACHEPARAMETERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheParameterGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT CreateCacheParameterGroupRequest : public ElastiCacheRequest {

public:
    CreateCacheParameterGroupRequest(const CreateCacheParameterGroupRequest &other);
    CreateCacheParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
