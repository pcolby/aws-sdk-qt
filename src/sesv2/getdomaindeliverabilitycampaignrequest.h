// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNREQUEST_H
#define QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetDomainDeliverabilityCampaignRequestPrivate;

class QTAWSSESV2_EXPORT GetDomainDeliverabilityCampaignRequest : public SESv2Request {

public:
    GetDomainDeliverabilityCampaignRequest(const GetDomainDeliverabilityCampaignRequest &other);
    GetDomainDeliverabilityCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainDeliverabilityCampaignRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
