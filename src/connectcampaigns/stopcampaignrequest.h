// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCAMPAIGNREQUEST_H
#define QTAWS_STOPCAMPAIGNREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StopCampaignRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT StopCampaignRequest : public ConnectCampaignsRequest {

public:
    StopCampaignRequest(const StopCampaignRequest &other);
    StopCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
