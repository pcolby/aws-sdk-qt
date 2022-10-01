// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYLOGGINGCONFIGRESPONSE_H
#define QTAWS_DELETEQUERYLOGGINGCONFIGRESPONSE_H

#include "route53response.h"
#include "deletequeryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteQueryLoggingConfigResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteQueryLoggingConfigResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteQueryLoggingConfigResponse(const DeleteQueryLoggingConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQueryLoggingConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueryLoggingConfigResponse)
    Q_DISABLE_COPY(DeleteQueryLoggingConfigResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
