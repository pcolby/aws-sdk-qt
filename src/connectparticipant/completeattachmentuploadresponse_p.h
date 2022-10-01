// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEATTACHMENTUPLOADRESPONSE_P_H
#define QTAWS_COMPLETEATTACHMENTUPLOADRESPONSE_P_H

#include "connectparticipantresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class CompleteAttachmentUploadResponse;

class CompleteAttachmentUploadResponsePrivate : public ConnectParticipantResponsePrivate {

public:

    explicit CompleteAttachmentUploadResponsePrivate(CompleteAttachmentUploadResponse * const q);

    void parseCompleteAttachmentUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteAttachmentUploadResponse)
    Q_DISABLE_COPY(CompleteAttachmentUploadResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
