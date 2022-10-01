// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINTRANSFERABILITYRESPONSE_H
#define QTAWS_CHECKDOMAINTRANSFERABILITYRESPONSE_H

#include "route53domainsresponse.h"
#include "checkdomaintransferabilityrequest.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainTransferabilityResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT CheckDomainTransferabilityResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    CheckDomainTransferabilityResponse(const CheckDomainTransferabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckDomainTransferabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckDomainTransferabilityResponse)
    Q_DISABLE_COPY(CheckDomainTransferabilityResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
