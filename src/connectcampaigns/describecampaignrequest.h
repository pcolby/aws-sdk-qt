// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAMPAIGNREQUEST_H
#define QTAWS_DESCRIBECAMPAIGNREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DescribeCampaignRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT DescribeCampaignRequest : public ConnectCampaignsRequest {

public:
    DescribeCampaignRequest(const DescribeCampaignRequest &other);
    DescribeCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
