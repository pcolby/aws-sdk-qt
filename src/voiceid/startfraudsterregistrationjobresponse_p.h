// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFRAUDSTERREGISTRATIONJOBRESPONSE_P_H
#define QTAWS_STARTFRAUDSTERREGISTRATIONJOBRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class StartFraudsterRegistrationJobResponse;

class StartFraudsterRegistrationJobResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit StartFraudsterRegistrationJobResponsePrivate(StartFraudsterRegistrationJobResponse * const q);

    void parseStartFraudsterRegistrationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFraudsterRegistrationJobResponse)
    Q_DISABLE_COPY(StartFraudsterRegistrationJobResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
