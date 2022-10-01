// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHEALTHCHECKRESPONSE_H
#define QTAWS_UPDATEHEALTHCHECKRESPONSE_H

#include "route53response.h"
#include "updatehealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class UpdateHealthCheckResponsePrivate;

class QTAWSROUTE53_EXPORT UpdateHealthCheckResponse : public Route53Response {
    Q_OBJECT

public:
    UpdateHealthCheckResponse(const UpdateHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHealthCheckResponse)
    Q_DISABLE_COPY(UpdateHealthCheckResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
