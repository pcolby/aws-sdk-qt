// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYVPCRESPONSE_H
#define QTAWS_LISTHOSTEDZONESBYVPCRESPONSE_H

#include "route53response.h"
#include "listhostedzonesbyvpcrequest.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByVPCResponsePrivate;

class QTAWSROUTE53_EXPORT ListHostedZonesByVPCResponse : public Route53Response {
    Q_OBJECT

public:
    ListHostedZonesByVPCResponse(const ListHostedZonesByVPCRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHostedZonesByVPCRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedZonesByVPCResponse)
    Q_DISABLE_COPY(ListHostedZonesByVPCResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
