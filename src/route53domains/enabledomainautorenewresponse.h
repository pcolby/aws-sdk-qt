// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINAUTORENEWRESPONSE_H
#define QTAWS_ENABLEDOMAINAUTORENEWRESPONSE_H

#include "route53domainsresponse.h"
#include "enabledomainautorenewrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainAutoRenewResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT EnableDomainAutoRenewResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    EnableDomainAutoRenewResponse(const EnableDomainAutoRenewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableDomainAutoRenewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDomainAutoRenewResponse)
    Q_DISABLE_COPY(EnableDomainAutoRenewResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
