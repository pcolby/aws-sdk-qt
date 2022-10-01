// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCATTACHMENTREQUEST_P_H
#define QTAWS_UPDATEVPCATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "updatevpcattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateVpcAttachmentRequest;

class UpdateVpcAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    UpdateVpcAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   UpdateVpcAttachmentRequest * const q);
    UpdateVpcAttachmentRequestPrivate(const UpdateVpcAttachmentRequestPrivate &other,
                                   UpdateVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVpcAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
