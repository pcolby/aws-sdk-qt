// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKLASTFAILUREREASONRESPONSE_H
#define QTAWS_GETHEALTHCHECKLASTFAILUREREASONRESPONSE_H

#include "route53response.h"
#include "gethealthchecklastfailurereasonrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckLastFailureReasonResponsePrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckLastFailureReasonResponse : public Route53Response {
    Q_OBJECT

public:
    GetHealthCheckLastFailureReasonResponse(const GetHealthCheckLastFailureReasonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHealthCheckLastFailureReasonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckLastFailureReasonResponse)
    Q_DISABLE_COPY(GetHealthCheckLastFailureReasonResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
