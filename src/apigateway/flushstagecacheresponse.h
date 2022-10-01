// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGECACHERESPONSE_H
#define QTAWS_FLUSHSTAGECACHERESPONSE_H

#include "apigatewayresponse.h"
#include "flushstagecacherequest.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageCacheResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT FlushStageCacheResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    FlushStageCacheResponse(const FlushStageCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FlushStageCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FlushStageCacheResponse)
    Q_DISABLE_COPY(FlushStageCacheResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
