// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINAVAILABILITYRESPONSE_H
#define QTAWS_CHECKDOMAINAVAILABILITYRESPONSE_H

#include "route53domainsresponse.h"
#include "checkdomainavailabilityrequest.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainAvailabilityResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT CheckDomainAvailabilityResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    CheckDomainAvailabilityResponse(const CheckDomainAvailabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckDomainAvailabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckDomainAvailabilityResponse)
    Q_DISABLE_COPY(CheckDomainAvailabilityResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
