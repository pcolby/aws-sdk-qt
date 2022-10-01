// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNREQUEST_H
#define QTAWS_UPDATECAMPAIGNREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateCampaignRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateCampaignRequest : public PinpointRequest {

public:
    UpdateCampaignRequest(const UpdateCampaignRequest &other);
    UpdateCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
