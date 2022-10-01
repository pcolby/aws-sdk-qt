// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGREQUEST_H
#define QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignOutboundCallConfigRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT UpdateCampaignOutboundCallConfigRequest : public ConnectCampaignsRequest {

public:
    UpdateCampaignOutboundCallConfigRequest(const UpdateCampaignOutboundCallConfigRequest &other);
    UpdateCampaignOutboundCallConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignOutboundCallConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
