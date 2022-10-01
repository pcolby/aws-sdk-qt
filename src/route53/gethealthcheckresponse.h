// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKRESPONSE_H
#define QTAWS_GETHEALTHCHECKRESPONSE_H

#include "route53response.h"
#include "gethealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckResponsePrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckResponse : public Route53Response {
    Q_OBJECT

public:
    GetHealthCheckResponse(const GetHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckResponse)
    Q_DISABLE_COPY(GetHealthCheckResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
