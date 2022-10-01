// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINREQUEST_H
#define QTAWS_DELETEDOMAINREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class DeleteDomainRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT DeleteDomainRequest : public Route53DomainsRequest {

public:
    DeleteDomainRequest(const DeleteDomainRequest &other);
    DeleteDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
