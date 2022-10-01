// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEDOMAINAUTHCODERESPONSE_P_H
#define QTAWS_RETRIEVEDOMAINAUTHCODERESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class RetrieveDomainAuthCodeResponse;

class RetrieveDomainAuthCodeResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit RetrieveDomainAuthCodeResponsePrivate(RetrieveDomainAuthCodeResponse * const q);

    void parseRetrieveDomainAuthCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetrieveDomainAuthCodeResponse)
    Q_DISABLE_COPY(RetrieveDomainAuthCodeResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
