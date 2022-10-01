// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCATTACHMENTRESPONSE_P_H
#define QTAWS_UPDATEVPCATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateVpcAttachmentResponse;

class UpdateVpcAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateVpcAttachmentResponsePrivate(UpdateVpcAttachmentResponse * const q);

    void parseUpdateVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVpcAttachmentResponse)
    Q_DISABLE_COPY(UpdateVpcAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
