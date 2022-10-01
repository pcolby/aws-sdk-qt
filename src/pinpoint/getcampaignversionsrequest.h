// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONSREQUEST_H
#define QTAWS_GETCAMPAIGNVERSIONSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetCampaignVersionsRequest : public PinpointRequest {

public:
    GetCampaignVersionsRequest(const GetCampaignVersionsRequest &other);
    GetCampaignVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignVersionsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
