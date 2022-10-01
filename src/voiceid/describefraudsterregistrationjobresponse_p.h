// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAUDSTERREGISTRATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEFRAUDSTERREGISTRATIONJOBRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class DescribeFraudsterRegistrationJobResponse;

class DescribeFraudsterRegistrationJobResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit DescribeFraudsterRegistrationJobResponsePrivate(DescribeFraudsterRegistrationJobResponse * const q);

    void parseDescribeFraudsterRegistrationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFraudsterRegistrationJobResponse)
    Q_DISABLE_COPY(DescribeFraudsterRegistrationJobResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
