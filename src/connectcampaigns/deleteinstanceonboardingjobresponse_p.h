// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEONBOARDINGJOBRESPONSE_P_H
#define QTAWS_DELETEINSTANCEONBOARDINGJOBRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteInstanceOnboardingJobResponse;

class DeleteInstanceOnboardingJobResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit DeleteInstanceOnboardingJobResponsePrivate(DeleteInstanceOnboardingJobResponse * const q);

    void parseDeleteInstanceOnboardingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceOnboardingJobResponse)
    Q_DISABLE_COPY(DeleteInstanceOnboardingJobResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
