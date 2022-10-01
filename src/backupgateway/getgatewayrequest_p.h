// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYREQUEST_P_H
#define QTAWS_GETGATEWAYREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "getgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class GetGatewayRequest;

class GetGatewayRequestPrivate : public BackupGatewayRequestPrivate {

public:
    GetGatewayRequestPrivate(const BackupGatewayRequest::Action action,
                                   GetGatewayRequest * const q);
    GetGatewayRequestPrivate(const GetGatewayRequestPrivate &other,
                                   GetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
