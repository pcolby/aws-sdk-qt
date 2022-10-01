// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHEALTHCHECKRESPONSE_H
#define QTAWS_DELETEHEALTHCHECKRESPONSE_H

#include "route53response.h"
#include "deletehealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteHealthCheckResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteHealthCheckResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteHealthCheckResponse(const DeleteHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHealthCheckResponse)
    Q_DISABLE_COPY(DeleteHealthCheckResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
