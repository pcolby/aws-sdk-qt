// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNREQUEST_H
#define QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainDeliverabilityCampaignRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDomainDeliverabilityCampaignRequest : public PinpointEmailRequest {

public:
    GetDomainDeliverabilityCampaignRequest(const GetDomainDeliverabilityCampaignRequest &other);
    GetDomainDeliverabilityCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainDeliverabilityCampaignRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
