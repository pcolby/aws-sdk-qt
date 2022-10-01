// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTATTACHMENTREQUEST_P_H
#define QTAWS_GETCONNECTATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getconnectattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectAttachmentRequest;

class GetConnectAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetConnectAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetConnectAttachmentRequest * const q);
    GetConnectAttachmentRequestPrivate(const GetConnectAttachmentRequestPrivate &other,
                                   GetConnectAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
