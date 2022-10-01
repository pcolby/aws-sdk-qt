// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMESERVERSRESPONSE_H
#define QTAWS_UPDATEDOMAINNAMESERVERSRESPONSE_H

#include "route53domainsresponse.h"
#include "updatedomainnameserversrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainNameserversResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateDomainNameserversResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    UpdateDomainNameserversResponse(const UpdateDomainNameserversRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainNameserversRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainNameserversResponse)
    Q_DISABLE_COPY(UpdateDomainNameserversResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
