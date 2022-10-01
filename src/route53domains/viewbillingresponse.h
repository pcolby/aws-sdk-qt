// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VIEWBILLINGRESPONSE_H
#define QTAWS_VIEWBILLINGRESPONSE_H

#include "route53domainsresponse.h"
#include "viewbillingrequest.h"

namespace QtAws {
namespace Route53Domains {

class ViewBillingResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT ViewBillingResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    ViewBillingResponse(const ViewBillingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ViewBillingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ViewBillingResponse)
    Q_DISABLE_COPY(ViewBillingResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
