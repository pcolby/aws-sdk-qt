// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECAMPAIGNREQUEST_H
#define QTAWS_RESUMECAMPAIGNREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ResumeCampaignRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT ResumeCampaignRequest : public ConnectCampaignsRequest {

public:
    ResumeCampaignRequest(const ResumeCampaignRequest &other);
    ResumeCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
