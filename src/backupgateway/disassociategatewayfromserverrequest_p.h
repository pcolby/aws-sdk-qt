// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEGATEWAYFROMSERVERREQUEST_P_H
#define QTAWS_DISASSOCIATEGATEWAYFROMSERVERREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "disassociategatewayfromserverrequest.h"

namespace QtAws {
namespace BackupGateway {

class DisassociateGatewayFromServerRequest;

class DisassociateGatewayFromServerRequestPrivate : public BackupGatewayRequestPrivate {

public:
    DisassociateGatewayFromServerRequestPrivate(const BackupGatewayRequest::Action action,
                                   DisassociateGatewayFromServerRequest * const q);
    DisassociateGatewayFromServerRequestPrivate(const DisassociateGatewayFromServerRequestPrivate &other,
                                   DisassociateGatewayFromServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateGatewayFromServerRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
