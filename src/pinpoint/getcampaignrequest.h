// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNREQUEST_H
#define QTAWS_GETCAMPAIGNREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignRequestPrivate;

class QTAWSPINPOINT_EXPORT GetCampaignRequest : public PinpointRequest {

public:
    GetCampaignRequest(const GetCampaignRequest &other);
    GetCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
