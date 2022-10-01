// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGEAUTHORIZERSCACHEREQUEST_H
#define QTAWS_FLUSHSTAGEAUTHORIZERSCACHEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageAuthorizersCacheRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT FlushStageAuthorizersCacheRequest : public ApiGatewayRequest {

public:
    FlushStageAuthorizersCacheRequest(const FlushStageAuthorizersCacheRequest &other);
    FlushStageAuthorizersCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FlushStageAuthorizersCacheRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
