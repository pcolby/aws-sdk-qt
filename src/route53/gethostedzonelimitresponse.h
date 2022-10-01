// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONELIMITRESPONSE_H
#define QTAWS_GETHOSTEDZONELIMITRESPONSE_H

#include "route53response.h"
#include "gethostedzonelimitrequest.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneLimitResponsePrivate;

class QTAWSROUTE53_EXPORT GetHostedZoneLimitResponse : public Route53Response {
    Q_OBJECT

public:
    GetHostedZoneLimitResponse(const GetHostedZoneLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHostedZoneLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedZoneLimitResponse)
    Q_DISABLE_COPY(GetHostedZoneLimitResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
