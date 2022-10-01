// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAMPAIGNREQUEST_H
#define QTAWS_DELETECAMPAIGNREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteCampaignRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteCampaignRequest : public PinpointRequest {

public:
    DeleteCampaignRequest(const DeleteCampaignRequest &other);
    DeleteCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCampaignRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
