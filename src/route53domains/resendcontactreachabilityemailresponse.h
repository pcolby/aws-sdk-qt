// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONTACTREACHABILITYEMAILRESPONSE_H
#define QTAWS_RESENDCONTACTREACHABILITYEMAILRESPONSE_H

#include "route53domainsresponse.h"
#include "resendcontactreachabilityemailrequest.h"

namespace QtAws {
namespace Route53Domains {

class ResendContactReachabilityEmailResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT ResendContactReachabilityEmailResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    ResendContactReachabilityEmailResponse(const ResendContactReachabilityEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResendContactReachabilityEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResendContactReachabilityEmailResponse)
    Q_DISABLE_COPY(ResendContactReachabilityEmailResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
