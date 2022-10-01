// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSREQUEST_H
#define QTAWS_GETCAMPAIGNSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetCampaignsRequest : public PinpointRequest {

public:
    GetCampaignsRequest(const GetCampaignsRequest &other);
    GetCampaignsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
