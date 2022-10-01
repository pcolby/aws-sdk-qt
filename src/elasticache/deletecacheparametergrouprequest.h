// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPARAMETERGROUPREQUEST_H
#define QTAWS_DELETECACHEPARAMETERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheParameterGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheParameterGroupRequest : public ElastiCacheRequest {

public:
    DeleteCacheParameterGroupRequest(const DeleteCacheParameterGroupRequest &other);
    DeleteCacheParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
