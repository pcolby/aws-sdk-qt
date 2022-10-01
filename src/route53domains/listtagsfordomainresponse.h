// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDOMAINRESPONSE_H
#define QTAWS_LISTTAGSFORDOMAINRESPONSE_H

#include "route53domainsresponse.h"
#include "listtagsfordomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListTagsForDomainResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT ListTagsForDomainResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    ListTagsForDomainResponse(const ListTagsForDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForDomainResponse)
    Q_DISABLE_COPY(ListTagsForDomainResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
