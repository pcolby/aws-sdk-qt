// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHOSTEDZONEDNSSECRESPONSE_H
#define QTAWS_DISABLEHOSTEDZONEDNSSECRESPONSE_H

#include "route53response.h"
#include "disablehostedzonednssecrequest.h"

namespace QtAws {
namespace Route53 {

class DisableHostedZoneDNSSECResponsePrivate;

class QTAWSROUTE53_EXPORT DisableHostedZoneDNSSECResponse : public Route53Response {
    Q_OBJECT

public:
    DisableHostedZoneDNSSECResponse(const DisableHostedZoneDNSSECRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableHostedZoneDNSSECRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableHostedZoneDNSSECResponse)
    Q_DISABLE_COPY(DisableHostedZoneDNSSECResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
