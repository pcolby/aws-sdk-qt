// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTATTACHMENTRESPONSE_P_H
#define QTAWS_GETCONNECTATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectAttachmentResponse;

class GetConnectAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetConnectAttachmentResponsePrivate(GetConnectAttachmentResponse * const q);

    void parseGetConnectAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectAttachmentResponse)
    Q_DISABLE_COPY(GetConnectAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
