// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEONBOARDINGJOBRESPONSE_H
#define QTAWS_DELETEINSTANCEONBOARDINGJOBRESPONSE_H

#include "connectcampaignsresponse.h"
#include "deleteinstanceonboardingjobrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteInstanceOnboardingJobResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT DeleteInstanceOnboardingJobResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    DeleteInstanceOnboardingJobResponse(const DeleteInstanceOnboardingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInstanceOnboardingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceOnboardingJobResponse)
    Q_DISABLE_COPY(DeleteInstanceOnboardingJobResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
