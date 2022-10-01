// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEONBOARDINGJOBSTATUSRESPONSE_P_H
#define QTAWS_GETINSTANCEONBOARDINGJOBSTATUSRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetInstanceOnboardingJobStatusResponse;

class GetInstanceOnboardingJobStatusResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit GetInstanceOnboardingJobStatusResponsePrivate(GetInstanceOnboardingJobStatusResponse * const q);

    void parseGetInstanceOnboardingJobStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceOnboardingJobStatusResponse)
    Q_DISABLE_COPY(GetInstanceOnboardingJobStatusResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
