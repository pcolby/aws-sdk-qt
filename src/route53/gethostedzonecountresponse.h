// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONECOUNTRESPONSE_H
#define QTAWS_GETHOSTEDZONECOUNTRESPONSE_H

#include "route53response.h"
#include "gethostedzonecountrequest.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneCountResponsePrivate;

class QTAWSROUTE53_EXPORT GetHostedZoneCountResponse : public Route53Response {
    Q_OBJECT

public:
    GetHostedZoneCountResponse(const GetHostedZoneCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHostedZoneCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedZoneCountResponse)
    Q_DISABLE_COPY(GetHostedZoneCountResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
