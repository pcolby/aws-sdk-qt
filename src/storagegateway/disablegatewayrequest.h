// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEGATEWAYREQUEST_H
#define QTAWS_DISABLEGATEWAYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DisableGatewayRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DisableGatewayRequest : public StorageGatewayRequest {

public:
    DisableGatewayRequest(const DisableGatewayRequest &other);
    DisableGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
