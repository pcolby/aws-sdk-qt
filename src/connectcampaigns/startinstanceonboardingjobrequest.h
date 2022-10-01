// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEONBOARDINGJOBREQUEST_H
#define QTAWS_STARTINSTANCEONBOARDINGJOBREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartInstanceOnboardingJobRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT StartInstanceOnboardingJobRequest : public ConnectCampaignsRequest {

public:
    StartInstanceOnboardingJobRequest(const StartInstanceOnboardingJobRequest &other);
    StartInstanceOnboardingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstanceOnboardingJobRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
