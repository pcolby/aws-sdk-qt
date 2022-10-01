// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYLOGGINGCONFIGRESPONSE_H
#define QTAWS_CREATEQUERYLOGGINGCONFIGRESPONSE_H

#include "route53response.h"
#include "createqueryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class CreateQueryLoggingConfigResponsePrivate;

class QTAWSROUTE53_EXPORT CreateQueryLoggingConfigResponse : public Route53Response {
    Q_OBJECT

public:
    CreateQueryLoggingConfigResponse(const CreateQueryLoggingConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQueryLoggingConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQueryLoggingConfigResponse)
    Q_DISABLE_COPY(CreateQueryLoggingConfigResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
