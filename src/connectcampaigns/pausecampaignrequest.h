// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECAMPAIGNREQUEST_H
#define QTAWS_PAUSECAMPAIGNREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class PauseCampaignRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT PauseCampaignRequest : public ConnectCampaignsRequest {

public:
    PauseCampaignRequest(const PauseCampaignRequest &other);
    PauseCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PauseCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
