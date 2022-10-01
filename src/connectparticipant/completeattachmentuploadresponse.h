// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEATTACHMENTUPLOADRESPONSE_H
#define QTAWS_COMPLETEATTACHMENTUPLOADRESPONSE_H

#include "connectparticipantresponse.h"
#include "completeattachmentuploadrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class CompleteAttachmentUploadResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT CompleteAttachmentUploadResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    CompleteAttachmentUploadResponse(const CompleteAttachmentUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteAttachmentUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteAttachmentUploadResponse)
    Q_DISABLE_COPY(CompleteAttachmentUploadResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
