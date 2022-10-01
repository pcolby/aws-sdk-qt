// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTATTACHMENTRESPONSE_P_H
#define QTAWS_REJECTATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class RejectAttachmentResponse;

class RejectAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit RejectAttachmentResponsePrivate(RejectAttachmentResponse * const q);

    void parseRejectAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectAttachmentResponse)
    Q_DISABLE_COPY(RejectAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
