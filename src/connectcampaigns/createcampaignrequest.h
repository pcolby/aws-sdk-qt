// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNREQUEST_H
#define QTAWS_CREATECAMPAIGNREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class CreateCampaignRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT CreateCampaignRequest : public ConnectCampaignsRequest {

public:
    CreateCampaignRequest(const CreateCampaignRequest &other);
    CreateCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
