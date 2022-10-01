// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNDATERANGEKPIREQUEST_H
#define QTAWS_GETCAMPAIGNDATERANGEKPIREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignDateRangeKpiRequestPrivate;

class QTAWSPINPOINT_EXPORT GetCampaignDateRangeKpiRequest : public PinpointRequest {

public:
    GetCampaignDateRangeKpiRequest(const GetCampaignDateRangeKpiRequest &other);
    GetCampaignDateRangeKpiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignDateRangeKpiRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
