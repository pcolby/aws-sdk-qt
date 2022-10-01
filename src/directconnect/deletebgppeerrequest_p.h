// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBGPPEERREQUEST_P_H
#define QTAWS_DELETEBGPPEERREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deletebgppeerrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteBGPPeerRequest;

class DeleteBGPPeerRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteBGPPeerRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteBGPPeerRequest * const q);
    DeleteBGPPeerRequestPrivate(const DeleteBGPPeerRequestPrivate &other,
                                   DeleteBGPPeerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBGPPeerRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
