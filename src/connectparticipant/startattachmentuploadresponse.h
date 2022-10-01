// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTATTACHMENTUPLOADRESPONSE_H
#define QTAWS_STARTATTACHMENTUPLOADRESPONSE_H

#include "connectparticipantresponse.h"
#include "startattachmentuploadrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class StartAttachmentUploadResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT StartAttachmentUploadResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    StartAttachmentUploadResponse(const StartAttachmentUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAttachmentUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAttachmentUploadResponse)
    Q_DISABLE_COPY(StartAttachmentUploadResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
