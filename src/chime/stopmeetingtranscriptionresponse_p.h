// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_P_H
#define QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class StopMeetingTranscriptionResponse;

class StopMeetingTranscriptionResponsePrivate : public ChimeResponsePrivate {

public:

    explicit StopMeetingTranscriptionResponsePrivate(StopMeetingTranscriptionResponse * const q);

    void parseStopMeetingTranscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StopMeetingTranscriptionResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
