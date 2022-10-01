// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEONBOARDINGJOBREQUEST_H
#define QTAWS_DELETEINSTANCEONBOARDINGJOBREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteInstanceOnboardingJobRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT DeleteInstanceOnboardingJobRequest : public ConnectCampaignsRequest {

public:
    DeleteInstanceOnboardingJobRequest(const DeleteInstanceOnboardingJobRequest &other);
    DeleteInstanceOnboardingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceOnboardingJobRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
