// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTPRIVACYREQUEST_H
#define QTAWS_UPDATEDOMAINCONTACTPRIVACYREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactPrivacyRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateDomainContactPrivacyRequest : public Route53DomainsRequest {

public:
    UpdateDomainContactPrivacyRequest(const UpdateDomainContactPrivacyRequest &other);
    UpdateDomainContactPrivacyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainContactPrivacyRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
