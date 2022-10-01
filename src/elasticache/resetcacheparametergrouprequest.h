// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHEPARAMETERGROUPREQUEST_H
#define QTAWS_RESETCACHEPARAMETERGROUPREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ResetCacheParameterGroupRequestPrivate;

class QTAWSELASTICACHE_EXPORT ResetCacheParameterGroupRequest : public ElastiCacheRequest {

public:
    ResetCacheParameterGroupRequest(const ResetCacheParameterGroupRequest &other);
    ResetCacheParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetCacheParameterGroupRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
