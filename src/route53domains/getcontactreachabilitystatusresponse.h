// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTREACHABILITYSTATUSRESPONSE_H
#define QTAWS_GETCONTACTREACHABILITYSTATUSRESPONSE_H

#include "route53domainsresponse.h"
#include "getcontactreachabilitystatusrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetContactReachabilityStatusResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetContactReachabilityStatusResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    GetContactReachabilityStatusResponse(const GetContactReachabilityStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactReachabilityStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactReachabilityStatusResponse)
    Q_DISABLE_COPY(GetContactReachabilityStatusResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
