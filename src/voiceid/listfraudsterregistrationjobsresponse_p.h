// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAUDSTERREGISTRATIONJOBSRESPONSE_P_H
#define QTAWS_LISTFRAUDSTERREGISTRATIONJOBSRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class ListFraudsterRegistrationJobsResponse;

class ListFraudsterRegistrationJobsResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit ListFraudsterRegistrationJobsResponsePrivate(ListFraudsterRegistrationJobsResponse * const q);

    void parseListFraudsterRegistrationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFraudsterRegistrationJobsResponse)
    Q_DISABLE_COPY(ListFraudsterRegistrationJobsResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
