// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEETINGTRANSCRIPTIONRESPONSE_H
#define QTAWS_STARTMEETINGTRANSCRIPTIONRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "startmeetingtranscriptionrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class StartMeetingTranscriptionResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT StartMeetingTranscriptionResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    StartMeetingTranscriptionResponse(const StartMeetingTranscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMeetingTranscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StartMeetingTranscriptionResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
