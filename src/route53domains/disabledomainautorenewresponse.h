// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINAUTORENEWRESPONSE_H
#define QTAWS_DISABLEDOMAINAUTORENEWRESPONSE_H

#include "route53domainsresponse.h"
#include "disabledomainautorenewrequest.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainAutoRenewResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT DisableDomainAutoRenewResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    DisableDomainAutoRenewResponse(const DisableDomainAutoRenewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableDomainAutoRenewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDomainAutoRenewResponse)
    Q_DISABLE_COPY(DisableDomainAutoRenewResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
