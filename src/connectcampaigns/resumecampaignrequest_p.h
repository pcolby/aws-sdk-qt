// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECAMPAIGNREQUEST_P_H
#define QTAWS_RESUMECAMPAIGNREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "resumecampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ResumeCampaignRequest;

class ResumeCampaignRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    ResumeCampaignRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   ResumeCampaignRequest * const q);
    ResumeCampaignRequestPrivate(const ResumeCampaignRequestPrivate &other,
                                   ResumeCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
