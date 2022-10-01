// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPESREQUEST_P_H
#define QTAWS_CREATETAPESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createtapesrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapesRequest;

class CreateTapesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateTapesRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateTapesRequest * const q);
    CreateTapesRequestPrivate(const CreateTapesRequestPrivate &other,
                                   CreateTapesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTapesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
