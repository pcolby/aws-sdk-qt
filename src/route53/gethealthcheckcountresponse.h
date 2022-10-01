// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKCOUNTRESPONSE_H
#define QTAWS_GETHEALTHCHECKCOUNTRESPONSE_H

#include "route53response.h"
#include "gethealthcheckcountrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckCountResponsePrivate;

class QTAWSROUTE53_EXPORT GetHealthCheckCountResponse : public Route53Response {
    Q_OBJECT

public:
    GetHealthCheckCountResponse(const GetHealthCheckCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHealthCheckCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHealthCheckCountResponse)
    Q_DISABLE_COPY(GetHealthCheckCountResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
