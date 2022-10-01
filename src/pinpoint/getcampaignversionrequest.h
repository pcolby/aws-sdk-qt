// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONREQUEST_H
#define QTAWS_GETCAMPAIGNVERSIONREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionRequestPrivate;

class QTAWSPINPOINT_EXPORT GetCampaignVersionRequest : public PinpointRequest {

public:
    GetCampaignVersionRequest(const GetCampaignVersionRequest &other);
    GetCampaignVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignVersionRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
