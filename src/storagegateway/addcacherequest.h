// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCACHEREQUEST_H
#define QTAWS_ADDCACHEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class AddCacheRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AddCacheRequest : public StorageGatewayRequest {

public:
    AddCacheRequest(const AddCacheRequest &other);
    AddCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
