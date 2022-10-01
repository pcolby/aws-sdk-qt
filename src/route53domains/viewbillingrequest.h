// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VIEWBILLINGREQUEST_H
#define QTAWS_VIEWBILLINGREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ViewBillingRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT ViewBillingRequest : public Route53DomainsRequest {

public:
    ViewBillingRequest(const ViewBillingRequest &other);
    ViewBillingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ViewBillingRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
