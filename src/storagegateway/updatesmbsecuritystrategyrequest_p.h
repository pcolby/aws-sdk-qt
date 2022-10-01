// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBSECURITYSTRATEGYREQUEST_P_H
#define QTAWS_UPDATESMBSECURITYSTRATEGYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatesmbsecuritystrategyrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBSecurityStrategyRequest;

class UpdateSMBSecurityStrategyRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateSMBSecurityStrategyRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateSMBSecurityStrategyRequest * const q);
    UpdateSMBSecurityStrategyRequestPrivate(const UpdateSMBSecurityStrategyRequestPrivate &other,
                                   UpdateSMBSecurityStrategyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSMBSecurityStrategyRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
