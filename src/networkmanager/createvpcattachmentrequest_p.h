// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCATTACHMENTREQUEST_P_H
#define QTAWS_CREATEVPCATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createvpcattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateVpcAttachmentRequest;

class CreateVpcAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateVpcAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateVpcAttachmentRequest * const q);
    CreateVpcAttachmentRequestPrivate(const CreateVpcAttachmentRequestPrivate &other,
                                   CreateVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
