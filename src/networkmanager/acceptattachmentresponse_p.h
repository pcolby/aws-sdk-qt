// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTATTACHMENTRESPONSE_P_H
#define QTAWS_ACCEPTATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class AcceptAttachmentResponse;

class AcceptAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit AcceptAttachmentResponsePrivate(AcceptAttachmentResponse * const q);

    void parseAcceptAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptAttachmentResponse)
    Q_DISABLE_COPY(AcceptAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
