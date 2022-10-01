// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTACHMENTRESPONSE_P_H
#define QTAWS_GETATTACHMENTRESPONSE_P_H

#include "connectparticipantresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class GetAttachmentResponse;

class GetAttachmentResponsePrivate : public ConnectParticipantResponsePrivate {

public:

    explicit GetAttachmentResponsePrivate(GetAttachmentResponse * const q);

    void parseGetAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAttachmentResponse)
    Q_DISABLE_COPY(GetAttachmentResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
