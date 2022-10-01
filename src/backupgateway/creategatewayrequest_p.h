// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYREQUEST_P_H
#define QTAWS_CREATEGATEWAYREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "creategatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class CreateGatewayRequest;

class CreateGatewayRequestPrivate : public BackupGatewayRequestPrivate {

public:
    CreateGatewayRequestPrivate(const BackupGatewayRequest::Action action,
                                   CreateGatewayRequest * const q);
    CreateGatewayRequestPrivate(const CreateGatewayRequestPrivate &other,
                                   CreateGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
