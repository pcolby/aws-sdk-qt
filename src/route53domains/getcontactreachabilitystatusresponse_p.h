// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTREACHABILITYSTATUSRESPONSE_P_H
#define QTAWS_GETCONTACTREACHABILITYSTATUSRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class GetContactReachabilityStatusResponse;

class GetContactReachabilityStatusResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit GetContactReachabilityStatusResponsePrivate(GetContactReachabilityStatusResponse * const q);

    void parseGetContactReachabilityStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactReachabilityStatusResponse)
    Q_DISABLE_COPY(GetContactReachabilityStatusResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
