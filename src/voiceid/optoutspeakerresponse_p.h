// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTOUTSPEAKERRESPONSE_P_H
#define QTAWS_OPTOUTSPEAKERRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class OptOutSpeakerResponse;

class OptOutSpeakerResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit OptOutSpeakerResponsePrivate(OptOutSpeakerResponse * const q);

    void parseOptOutSpeakerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OptOutSpeakerResponse)
    Q_DISABLE_COPY(OptOutSpeakerResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
