// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VIEWBILLINGRESPONSE_P_H
#define QTAWS_VIEWBILLINGRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class ViewBillingResponse;

class ViewBillingResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit ViewBillingResponsePrivate(ViewBillingResponse * const q);

    void parseViewBillingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ViewBillingResponse)
    Q_DISABLE_COPY(ViewBillingResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
