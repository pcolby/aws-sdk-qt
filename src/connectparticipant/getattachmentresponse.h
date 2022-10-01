// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTACHMENTRESPONSE_H
#define QTAWS_GETATTACHMENTRESPONSE_H

#include "connectparticipantresponse.h"
#include "getattachmentrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class GetAttachmentResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT GetAttachmentResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    GetAttachmentResponse(const GetAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttachmentResponse)
    Q_DISABLE_COPY(GetAttachmentResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
