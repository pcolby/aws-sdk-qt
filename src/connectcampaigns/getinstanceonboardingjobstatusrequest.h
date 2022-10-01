// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEONBOARDINGJOBSTATUSREQUEST_H
#define QTAWS_GETINSTANCEONBOARDINGJOBSTATUSREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetInstanceOnboardingJobStatusRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetInstanceOnboardingJobStatusRequest : public ConnectCampaignsRequest {

public:
    GetInstanceOnboardingJobStatusRequest(const GetInstanceOnboardingJobStatusRequest &other);
    GetInstanceOnboardingJobStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceOnboardingJobStatusRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
