// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATEBATCHREQUEST_H
#define QTAWS_GETCAMPAIGNSTATEBATCHREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateBatchRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetCampaignStateBatchRequest : public ConnectCampaignsRequest {

public:
    GetCampaignStateBatchRequest(const GetCampaignStateBatchRequest &other);
    GetCampaignStateBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignStateBatchRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
