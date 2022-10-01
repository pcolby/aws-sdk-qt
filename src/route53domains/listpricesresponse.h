// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICESRESPONSE_H
#define QTAWS_LISTPRICESRESPONSE_H

#include "route53domainsresponse.h"
#include "listpricesrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListPricesResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT ListPricesResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    ListPricesResponse(const ListPricesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPricesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricesResponse)
    Q_DISABLE_COPY(ListPricesResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
