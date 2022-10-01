// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_H
#define QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "stopmeetingtranscriptionrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class StopMeetingTranscriptionResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT StopMeetingTranscriptionResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    StopMeetingTranscriptionResponse(const StopMeetingTranscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopMeetingTranscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StopMeetingTranscriptionResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
