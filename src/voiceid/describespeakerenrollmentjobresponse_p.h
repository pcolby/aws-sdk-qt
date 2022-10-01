// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERENROLLMENTJOBRESPONSE_P_H
#define QTAWS_DESCRIBESPEAKERENROLLMENTJOBRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerEnrollmentJobResponse;

class DescribeSpeakerEnrollmentJobResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit DescribeSpeakerEnrollmentJobResponsePrivate(DescribeSpeakerEnrollmentJobResponse * const q);

    void parseDescribeSpeakerEnrollmentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpeakerEnrollmentJobResponse)
    Q_DISABLE_COPY(DescribeSpeakerEnrollmentJobResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
