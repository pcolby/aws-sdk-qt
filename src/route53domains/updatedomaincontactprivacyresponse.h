// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTPRIVACYRESPONSE_H
#define QTAWS_UPDATEDOMAINCONTACTPRIVACYRESPONSE_H

#include "route53domainsresponse.h"
#include "updatedomaincontactprivacyrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactPrivacyResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateDomainContactPrivacyResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    UpdateDomainContactPrivacyResponse(const UpdateDomainContactPrivacyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainContactPrivacyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainContactPrivacyResponse)
    Q_DISABLE_COPY(UpdateDomainContactPrivacyResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
