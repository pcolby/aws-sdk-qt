// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTATTACHMENTREQUEST_P_H
#define QTAWS_REJECTATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "rejectattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class RejectAttachmentRequest;

class RejectAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    RejectAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   RejectAttachmentRequest * const q);
    RejectAttachmentRequestPrivate(const RejectAttachmentRequestPrivate &other,
                                   RejectAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
