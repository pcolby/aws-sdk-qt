// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTATTACHMENTRESPONSE_P_H
#define QTAWS_CREATECONNECTATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectAttachmentResponse;

class CreateConnectAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateConnectAttachmentResponsePrivate(CreateConnectAttachmentResponse * const q);

    void parseCreateConnectAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectAttachmentResponse)
    Q_DISABLE_COPY(CreateConnectAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
