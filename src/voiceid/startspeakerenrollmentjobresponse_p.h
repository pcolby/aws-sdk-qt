// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEAKERENROLLMENTJOBRESPONSE_P_H
#define QTAWS_STARTSPEAKERENROLLMENTJOBRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class StartSpeakerEnrollmentJobResponse;

class StartSpeakerEnrollmentJobResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit StartSpeakerEnrollmentJobResponsePrivate(StartSpeakerEnrollmentJobResponse * const q);

    void parseStartSpeakerEnrollmentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSpeakerEnrollmentJobResponse)
    Q_DISABLE_COPY(StartSpeakerEnrollmentJobResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
