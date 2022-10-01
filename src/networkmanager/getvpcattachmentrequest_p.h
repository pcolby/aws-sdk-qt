// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCATTACHMENTREQUEST_P_H
#define QTAWS_GETVPCATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getvpcattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetVpcAttachmentRequest;

class GetVpcAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetVpcAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetVpcAttachmentRequest * const q);
    GetVpcAttachmentRequestPrivate(const GetVpcAttachmentRequestPrivate &other,
                                   GetVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVpcAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
