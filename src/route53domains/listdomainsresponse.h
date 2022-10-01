// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSRESPONSE_H
#define QTAWS_LISTDOMAINSRESPONSE_H

#include "route53domainsresponse.h"
#include "listdomainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListDomainsResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT ListDomainsResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    ListDomainsResponse(const ListDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainsResponse)
    Q_DISABLE_COPY(ListDomainsResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
