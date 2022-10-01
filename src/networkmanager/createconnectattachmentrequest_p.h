// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTATTACHMENTREQUEST_P_H
#define QTAWS_CREATECONNECTATTACHMENTREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "createconnectattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectAttachmentRequest;

class CreateConnectAttachmentRequestPrivate : public NetworkManagerRequestPrivate {

public:
    CreateConnectAttachmentRequestPrivate(const NetworkManagerRequest::Action action,
                                   CreateConnectAttachmentRequest * const q);
    CreateConnectAttachmentRequestPrivate(const CreateConnectAttachmentRequestPrivate &other,
                                   CreateConnectAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectAttachmentRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
