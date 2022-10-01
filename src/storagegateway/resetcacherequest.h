// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHEREQUEST_H
#define QTAWS_RESETCACHEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ResetCacheRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ResetCacheRequest : public StorageGatewayRequest {

public:
    ResetCacheRequest(const ResetCacheRequest &other);
    ResetCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
