// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTATTACHMENTREQUEST_P_H
#define QTAWS_ACCEPTATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "acceptattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class AcceptAttachmentRequest;

class AcceptAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    AcceptAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   AcceptAttachmentRequest * const q);
    AcceptAttachmentRequestPrivate(const AcceptAttachmentRequestPrivate &other,
                                   AcceptAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
