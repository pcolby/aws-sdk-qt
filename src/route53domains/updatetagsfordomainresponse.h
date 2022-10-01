// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORDOMAINRESPONSE_H
#define QTAWS_UPDATETAGSFORDOMAINRESPONSE_H

#include "route53domainsresponse.h"
#include "updatetagsfordomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateTagsForDomainResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateTagsForDomainResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    UpdateTagsForDomainResponse(const UpdateTagsForDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTagsForDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTagsForDomainResponse)
    Q_DISABLE_COPY(UpdateTagsForDomainResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
