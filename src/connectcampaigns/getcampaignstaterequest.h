// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATEREQUEST_H
#define QTAWS_GETCAMPAIGNSTATEREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetCampaignStateRequest : public ConnectCampaignsRequest {

public:
    GetCampaignStateRequest(const GetCampaignStateRequest &other);
    GetCampaignStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignStateRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
