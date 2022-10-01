// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNDIALERCONFIGREQUEST_H
#define QTAWS_UPDATECAMPAIGNDIALERCONFIGREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignDialerConfigRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT UpdateCampaignDialerConfigRequest : public ConnectCampaignsRequest {

public:
    UpdateCampaignDialerConfigRequest(const UpdateCampaignDialerConfigRequest &other);
    UpdateCampaignDialerConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignDialerConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
