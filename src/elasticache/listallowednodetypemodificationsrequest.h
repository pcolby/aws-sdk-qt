// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEMODIFICATIONSREQUEST_H
#define QTAWS_LISTALLOWEDNODETYPEMODIFICATIONSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ListAllowedNodeTypeModificationsRequestPrivate;

class QTAWSELASTICACHE_EXPORT ListAllowedNodeTypeModificationsRequest : public ElastiCacheRequest {

public:
    ListAllowedNodeTypeModificationsRequest(const ListAllowedNodeTypeModificationsRequest &other);
    ListAllowedNodeTypeModificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAllowedNodeTypeModificationsRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
