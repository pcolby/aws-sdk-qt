// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYINFORMATIONREQUEST_P_H
#define QTAWS_UPDATEGATEWAYINFORMATIONREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updategatewayinformationrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateGatewayInformationRequest;

class UpdateGatewayInformationRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateGatewayInformationRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateGatewayInformationRequest * const q);
    UpdateGatewayInformationRequestPrivate(const UpdateGatewayInformationRequestPrivate &other,
                                   UpdateGatewayInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayInformationRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
