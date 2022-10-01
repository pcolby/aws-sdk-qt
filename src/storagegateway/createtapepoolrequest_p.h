// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEPOOLREQUEST_P_H
#define QTAWS_CREATETAPEPOOLREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createtapepoolrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapePoolRequest;

class CreateTapePoolRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateTapePoolRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateTapePoolRequest * const q);
    CreateTapePoolRequestPrivate(const CreateTapePoolRequestPrivate &other,
                                   CreateTapePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTapePoolRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
