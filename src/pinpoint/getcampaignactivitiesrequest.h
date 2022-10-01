// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNACTIVITIESREQUEST_H
#define QTAWS_GETCAMPAIGNACTIVITIESREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignActivitiesRequestPrivate;

class QTAWSPINPOINT_EXPORT GetCampaignActivitiesRequest : public PinpointRequest {

public:
    GetCampaignActivitiesRequest(const GetCampaignActivitiesRequest &other);
    GetCampaignActivitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignActivitiesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
