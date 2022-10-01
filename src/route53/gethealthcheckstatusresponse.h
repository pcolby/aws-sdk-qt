// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKSTATUSRESPONSE_H
#define QTAWS_GETHEALTHCHECKSTATUSRESPONSE_H

#include "route53response.h"
#include "gethealthcheckstatusrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckStatusResponsePrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckStatusResponse : public Route53Response {
    Q_OBJECT

public:
    GetHealthCheckStatusResponse(const GetHealthCheckStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHealthCheckStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckStatusResponse)
    Q_DISABLE_COPY(GetHealthCheckStatusResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
