// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICESREQUEST_H
#define QTAWS_LISTPRICESREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListPricesRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT ListPricesRequest : public Route53DomainsRequest {

public:
    ListPricesRequest(const ListPricesRequest &other);
    ListPricesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricesRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
