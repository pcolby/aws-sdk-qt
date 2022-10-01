// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONREQUEST_P_H
#define QTAWS_CREATECONNECTIONREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createconnectionrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectionRequest;

class CreateConnectionRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateConnectionRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateConnectionRequest * const q);
    CreateConnectionRequestPrivate(const CreateConnectionRequestPrivate &other,
                                   CreateConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectionRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
