// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDETAILRESPONSE_H
#define QTAWS_GETDOMAINDETAILRESPONSE_H

#include "route53domainsresponse.h"
#include "getdomaindetailrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainDetailResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetDomainDetailResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    GetDomainDetailResponse(const GetDomainDetailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainDetailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainDetailResponse)
    Q_DISABLE_COPY(GetDomainDetailResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
