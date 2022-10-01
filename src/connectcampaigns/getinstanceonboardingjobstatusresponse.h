// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEONBOARDINGJOBSTATUSRESPONSE_H
#define QTAWS_GETINSTANCEONBOARDINGJOBSTATUSRESPONSE_H

#include "connectcampaignsresponse.h"
#include "getinstanceonboardingjobstatusrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetInstanceOnboardingJobStatusResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetInstanceOnboardingJobStatusResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    GetInstanceOnboardingJobStatusResponse(const GetInstanceOnboardingJobStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceOnboardingJobStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceOnboardingJobStatusResponse)
    Q_DISABLE_COPY(GetInstanceOnboardingJobStatusResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
