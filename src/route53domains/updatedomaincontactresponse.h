// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTRESPONSE_H
#define QTAWS_UPDATEDOMAINCONTACTRESPONSE_H

#include "route53domainsresponse.h"
#include "updatedomaincontactrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateDomainContactResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    UpdateDomainContactResponse(const UpdateDomainContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainContactResponse)
    Q_DISABLE_COPY(UpdateDomainContactResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
