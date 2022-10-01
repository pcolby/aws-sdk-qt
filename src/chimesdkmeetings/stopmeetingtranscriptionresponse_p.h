// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_P_H
#define QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class StopMeetingTranscriptionResponse;

class StopMeetingTranscriptionResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit StopMeetingTranscriptionResponsePrivate(StopMeetingTranscriptionResponse * const q);

    void parseStopMeetingTranscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StopMeetingTranscriptionResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
