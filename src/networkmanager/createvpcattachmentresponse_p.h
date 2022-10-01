// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCATTACHMENTRESPONSE_P_H
#define QTAWS_CREATEVPCATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateVpcAttachmentResponse;

class CreateVpcAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateVpcAttachmentResponsePrivate(CreateVpcAttachmentResponse * const q);

    void parseCreateVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcAttachmentResponse)
    Q_DISABLE_COPY(CreateVpcAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
