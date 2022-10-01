// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWDOMAINRESPONSE_H
#define QTAWS_RENEWDOMAINRESPONSE_H

#include "route53domainsresponse.h"
#include "renewdomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class RenewDomainResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT RenewDomainResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    RenewDomainResponse(const RenewDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RenewDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenewDomainResponse)
    Q_DISABLE_COPY(RenewDomainResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
