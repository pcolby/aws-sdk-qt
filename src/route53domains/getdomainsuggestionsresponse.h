// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSUGGESTIONSRESPONSE_H
#define QTAWS_GETDOMAINSUGGESTIONSRESPONSE_H

#include "route53domainsresponse.h"
#include "getdomainsuggestionsrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainSuggestionsResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetDomainSuggestionsResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    GetDomainSuggestionsResponse(const GetDomainSuggestionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainSuggestionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainSuggestionsResponse)
    Q_DISABLE_COPY(GetDomainSuggestionsResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
