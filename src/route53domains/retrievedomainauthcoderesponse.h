// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEDOMAINAUTHCODERESPONSE_H
#define QTAWS_RETRIEVEDOMAINAUTHCODERESPONSE_H

#include "route53domainsresponse.h"
#include "retrievedomainauthcoderequest.h"

namespace QtAws {
namespace Route53Domains {

class RetrieveDomainAuthCodeResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT RetrieveDomainAuthCodeResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    RetrieveDomainAuthCodeResponse(const RetrieveDomainAuthCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetrieveDomainAuthCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveDomainAuthCodeResponse)
    Q_DISABLE_COPY(RetrieveDomainAuthCodeResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
