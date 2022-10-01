// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHAPCREDENTIALSREQUEST_P_H
#define QTAWS_UPDATECHAPCREDENTIALSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatechapcredentialsrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateChapCredentialsRequest;

class UpdateChapCredentialsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateChapCredentialsRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateChapCredentialsRequest * const q);
    UpdateChapCredentialsRequestPrivate(const UpdateChapCredentialsRequestPrivate &other,
                                   UpdateChapCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChapCredentialsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
