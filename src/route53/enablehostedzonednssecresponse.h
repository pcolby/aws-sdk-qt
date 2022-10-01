// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHOSTEDZONEDNSSECRESPONSE_H
#define QTAWS_ENABLEHOSTEDZONEDNSSECRESPONSE_H

#include "route53response.h"
#include "enablehostedzonednssecrequest.h"

namespace QtAws {
namespace Route53 {

class EnableHostedZoneDNSSECResponsePrivate;

class QTAWSROUTE53_EXPORT EnableHostedZoneDNSSECResponse : public Route53Response {
    Q_OBJECT

public:
    EnableHostedZoneDNSSECResponse(const EnableHostedZoneDNSSECRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableHostedZoneDNSSECRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableHostedZoneDNSSECResponse)
    Q_DISABLE_COPY(EnableHostedZoneDNSSECResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
