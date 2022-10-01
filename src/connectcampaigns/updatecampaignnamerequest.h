// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNNAMEREQUEST_H
#define QTAWS_UPDATECAMPAIGNNAMEREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignNameRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT UpdateCampaignNameRequest : public ConnectCampaignsRequest {

public:
    UpdateCampaignNameRequest(const UpdateCampaignNameRequest &other);
    UpdateCampaignNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignNameRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
