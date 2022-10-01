// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHCACHEREQUEST_H
#define QTAWS_REFRESHCACHEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class RefreshCacheRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT RefreshCacheRequest : public StorageGatewayRequest {

public:
    RefreshCacheRequest(const RefreshCacheRequest &other);
    RefreshCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
