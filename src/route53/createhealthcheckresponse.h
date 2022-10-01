// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHEALTHCHECKRESPONSE_H
#define QTAWS_CREATEHEALTHCHECKRESPONSE_H

#include "route53response.h"
#include "createhealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class CreateHealthCheckResponsePrivate;

class QTAWSROUTE53_EXPORT CreateHealthCheckResponse : public Route53Response {
    Q_OBJECT

public:
    CreateHealthCheckResponse(const CreateHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHealthCheckResponse)
    Q_DISABLE_COPY(CreateHealthCheckResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
