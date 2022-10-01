// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEONBOARDINGJOBRESPONSE_H
#define QTAWS_STARTINSTANCEONBOARDINGJOBRESPONSE_H

#include "connectcampaignsresponse.h"
#include "startinstanceonboardingjobrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartInstanceOnboardingJobResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT StartInstanceOnboardingJobResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    StartInstanceOnboardingJobResponse(const StartInstanceOnboardingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartInstanceOnboardingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstanceOnboardingJobResponse)
    Q_DISABLE_COPY(StartInstanceOnboardingJobResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
