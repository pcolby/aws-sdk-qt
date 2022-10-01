// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESRESPONSE_H
#define QTAWS_LISTHOSTEDZONESRESPONSE_H

#include "route53response.h"
#include "listhostedzonesrequest.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesResponsePrivate;

class QTAWSROUTE53_EXPORT ListHostedZonesResponse : public Route53Response {
    Q_OBJECT

public:
    ListHostedZonesResponse(const ListHostedZonesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHostedZonesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedZonesResponse)
    Q_DISABLE_COPY(ListHostedZonesResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
