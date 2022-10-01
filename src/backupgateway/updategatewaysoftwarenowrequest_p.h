// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_P_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "updategatewaysoftwarenowrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateGatewaySoftwareNowRequest;

class UpdateGatewaySoftwareNowRequestPrivate : public BackupGatewayRequestPrivate {

public:
    UpdateGatewaySoftwareNowRequestPrivate(const BackupGatewayRequest::Action action,
                                   UpdateGatewaySoftwareNowRequest * const q);
    UpdateGatewaySoftwareNowRequestPrivate(const UpdateGatewaySoftwareNowRequestPrivate &other,
                                   UpdateGatewaySoftwareNowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewaySoftwareNowRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
