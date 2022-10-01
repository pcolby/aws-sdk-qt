// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSREQUEST_H
#define QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListDomainDeliverabilityCampaignsRequestPrivate;

class QTAWSSESV2_EXPORT ListDomainDeliverabilityCampaignsRequest : public SESv2Request {

public:
    ListDomainDeliverabilityCampaignsRequest(const ListDomainDeliverabilityCampaignsRequest &other);
    ListDomainDeliverabilityCampaignsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainDeliverabilityCampaignsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
