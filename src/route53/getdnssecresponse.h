// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDNSSECRESPONSE_H
#define QTAWS_GETDNSSECRESPONSE_H

#include "route53response.h"
#include "getdnssecrequest.h"

namespace QtAws {
namespace Route53 {

class GetDNSSECResponsePrivate;

class QTAWSROUTE53_EXPORT GetDNSSECResponse : public Route53Response {
    Q_OBJECT

public:
    GetDNSSECResponse(const GetDNSSECRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDNSSECRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDNSSECResponse)
    Q_DISABLE_COPY(GetDNSSECResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
