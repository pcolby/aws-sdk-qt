// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYSREQUEST_P_H
#define QTAWS_LISTGATEWAYSREQUEST_P_H

#include "backupgatewayrequest_p.h"
#include "listgatewaysrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListGatewaysRequest;

class ListGatewaysRequestPrivate : public BackupGatewayRequestPrivate {

public:
    ListGatewaysRequestPrivate(const BackupGatewayRequest::Action action,
                                   ListGatewaysRequest * const q);
    ListGatewaysRequestPrivate(const ListGatewaysRequestPrivate &other,
                                   ListGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGatewaysRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
