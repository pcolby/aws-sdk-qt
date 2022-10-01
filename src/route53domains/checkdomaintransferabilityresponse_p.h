// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINTRANSFERABILITYRESPONSE_P_H
#define QTAWS_CHECKDOMAINTRANSFERABILITYRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainTransferabilityResponse;

class CheckDomainTransferabilityResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit CheckDomainTransferabilityResponsePrivate(CheckDomainTransferabilityResponse * const q);

    void parseCheckDomainTransferabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckDomainTransferabilityResponse)
    Q_DISABLE_COPY(CheckDomainTransferabilityResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
