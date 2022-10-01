// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONTACTREACHABILITYEMAILRESPONSE_P_H
#define QTAWS_RESENDCONTACTREACHABILITYEMAILRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class ResendContactReachabilityEmailResponse;

class ResendContactReachabilityEmailResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit ResendContactReachabilityEmailResponsePrivate(ResendContactReachabilityEmailResponse * const q);

    void parseResendContactReachabilityEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResendContactReachabilityEmailResponse)
    Q_DISABLE_COPY(ResendContactReachabilityEmailResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
