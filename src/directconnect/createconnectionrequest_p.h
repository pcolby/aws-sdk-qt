// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONREQUEST_P_H
#define QTAWS_CREATECONNECTIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateConnectionRequest;

class CreateConnectionRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateConnectionRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateConnectionRequest * const q);
    CreateConnectionRequestPrivate(const CreateConnectionRequestPrivate &other,
                                   CreateConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
