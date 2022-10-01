// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEGATEWAYTOSERVERREQUEST_P_H
#define QTAWS_ASSOCIATEGATEWAYTOSERVERREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "associategatewaytoserverrequest.h"

namespace QtAws {
namespace BackupGateway {

class AssociateGatewayToServerRequest;

class AssociateGatewayToServerRequestPrivate : public BackupGatewayRequestPrivate {

public:
    AssociateGatewayToServerRequestPrivate(const BackupGatewayRequest::Action action,
                                   AssociateGatewayToServerRequest * const q);
    AssociateGatewayToServerRequestPrivate(const AssociateGatewayToServerRequestPrivate &other,
                                   AssociateGatewayToServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateGatewayToServerRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
