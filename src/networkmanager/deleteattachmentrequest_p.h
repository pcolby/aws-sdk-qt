// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTACHMENTREQUEST_P_H
#define QTAWS_DELETEATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "deleteattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteAttachmentRequest;

class DeleteAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    DeleteAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   DeleteAttachmentRequest * const q);
    DeleteAttachmentRequestPrivate(const DeleteAttachmentRequestPrivate &other,
                                   DeleteAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
