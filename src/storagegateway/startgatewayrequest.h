// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGATEWAYREQUEST_H
#define QTAWS_STARTGATEWAYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class StartGatewayRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT StartGatewayRequest : public StorageGatewayRequest {

public:
    StartGatewayRequest(const StartGatewayRequest &other);
    StartGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
