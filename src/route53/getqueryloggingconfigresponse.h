// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYLOGGINGCONFIGRESPONSE_H
#define QTAWS_GETQUERYLOGGINGCONFIGRESPONSE_H

#include "route53response.h"
#include "getqueryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class GetQueryLoggingConfigResponsePrivate;

class QTAWSROUTE53_EXPORT GetQueryLoggingConfigResponse : public Route53Response {
    Q_OBJECT

public:
    GetQueryLoggingConfigResponse(const GetQueryLoggingConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueryLoggingConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryLoggingConfigResponse)
    Q_DISABLE_COPY(GetQueryLoggingConfigResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
