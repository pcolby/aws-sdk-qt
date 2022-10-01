// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYREQUEST_P_H
#define QTAWS_DELETEGATEWAYREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "deletegatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class DeleteGatewayRequest;

class DeleteGatewayRequestPrivate : public BackupGatewayRequestPrivate {

public:
    DeleteGatewayRequestPrivate(const BackupGatewayRequest::Action action,
                                   DeleteGatewayRequest * const q);
    DeleteGatewayRequestPrivate(const DeleteGatewayRequestPrivate &other,
                                   DeleteGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
