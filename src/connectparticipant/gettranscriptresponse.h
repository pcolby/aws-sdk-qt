// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTRESPONSE_H
#define QTAWS_GETTRANSCRIPTRESPONSE_H

#include "connectparticipantresponse.h"
#include "gettranscriptrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class GetTranscriptResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT GetTranscriptResponse : public ConnectParticipantResponse {
    Q_OBJECT

public:
    GetTranscriptResponse(const GetTranscriptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTranscriptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTranscriptResponse)
    Q_DISABLE_COPY(GetTranscriptResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
