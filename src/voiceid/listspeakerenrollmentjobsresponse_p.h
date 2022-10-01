// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERENROLLMENTJOBSRESPONSE_P_H
#define QTAWS_LISTSPEAKERENROLLMENTJOBSRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakerEnrollmentJobsResponse;

class ListSpeakerEnrollmentJobsResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit ListSpeakerEnrollmentJobsResponsePrivate(ListSpeakerEnrollmentJobsResponse * const q);

    void parseListSpeakerEnrollmentJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSpeakerEnrollmentJobsResponse)
    Q_DISABLE_COPY(ListSpeakerEnrollmentJobsResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
