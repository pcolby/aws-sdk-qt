// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYREQUEST_H
#define QTAWS_DELETEGATEWAYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteGatewayRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteGatewayRequest : public StorageGatewayRequest {

public:
    DeleteGatewayRequest(const DeleteGatewayRequest &other);
    DeleteGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
