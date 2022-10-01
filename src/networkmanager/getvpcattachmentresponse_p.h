// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCATTACHMENTRESPONSE_P_H
#define QTAWS_GETVPCATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetVpcAttachmentResponse;

class GetVpcAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetVpcAttachmentResponsePrivate(GetVpcAttachmentResponse * const q);

    void parseGetVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpcAttachmentResponse)
    Q_DISABLE_COPY(GetVpcAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
