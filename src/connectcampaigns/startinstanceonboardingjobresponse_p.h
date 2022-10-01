// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEONBOARDINGJOBRESPONSE_P_H
#define QTAWS_STARTINSTANCEONBOARDINGJOBRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartInstanceOnboardingJobResponse;

class StartInstanceOnboardingJobResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit StartInstanceOnboardingJobResponsePrivate(StartInstanceOnboardingJobResponse * const q);

    void parseStartInstanceOnboardingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartInstanceOnboardingJobResponse)
    Q_DISABLE_COPY(StartInstanceOnboardingJobResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
