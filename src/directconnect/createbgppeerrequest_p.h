// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBGPPEERREQUEST_P_H
#define QTAWS_CREATEBGPPEERREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createbgppeerrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateBGPPeerRequest;

class CreateBGPPeerRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateBGPPeerRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateBGPPeerRequest * const q);
    CreateBGPPeerRequestPrivate(const CreateBGPPeerRequestPrivate &other,
                                   CreateBGPPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBGPPeerRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
