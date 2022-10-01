// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTPRIVACYRESPONSE_P_H
#define QTAWS_UPDATEDOMAINCONTACTPRIVACYRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactPrivacyResponse;

class UpdateDomainContactPrivacyResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit UpdateDomainContactPrivacyResponsePrivate(UpdateDomainContactPrivacyResponse * const q);

    void parseUpdateDomainContactPrivacyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainContactPrivacyResponse)
    Q_DISABLE_COPY(UpdateDomainContactPrivacyResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
