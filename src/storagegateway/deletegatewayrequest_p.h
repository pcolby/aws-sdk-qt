// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYREQUEST_P_H
#define QTAWS_DELETEGATEWAYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteGatewayRequest;

class DeleteGatewayRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteGatewayRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteGatewayRequest * const q);
    DeleteGatewayRequestPrivate(const DeleteGatewayRequestPrivate &other,
                                   DeleteGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
