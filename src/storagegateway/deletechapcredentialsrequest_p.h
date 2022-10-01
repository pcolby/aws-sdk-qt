// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHAPCREDENTIALSREQUEST_P_H
#define QTAWS_DELETECHAPCREDENTIALSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletechapcredentialsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteChapCredentialsRequest;

class DeleteChapCredentialsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteChapCredentialsRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteChapCredentialsRequest * const q);
    DeleteChapCredentialsRequestPrivate(const DeleteChapCredentialsRequestPrivate &other,
                                   DeleteChapCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChapCredentialsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
