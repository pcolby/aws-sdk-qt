// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTRESPONSE_P_H
#define QTAWS_UPDATEDOMAINCONTACTRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactResponse;

class UpdateDomainContactResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit UpdateDomainContactResponsePrivate(UpdateDomainContactResponse * const q);

    void parseUpdateDomainContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainContactResponse)
    Q_DISABLE_COPY(UpdateDomainContactResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
