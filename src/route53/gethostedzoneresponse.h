// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONERESPONSE_H
#define QTAWS_GETHOSTEDZONERESPONSE_H

#include "route53response.h"
#include "gethostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneResponsePrivate;

class QTAWSROUTE53_EXPORT GetHostedZoneResponse : public Route53Response {
    Q_OBJECT

public:
    GetHostedZoneResponse(const GetHostedZoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHostedZoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedZoneResponse)
    Q_DISABLE_COPY(GetHostedZoneResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
