// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGECACHEREQUEST_H
#define QTAWS_FLUSHSTAGECACHEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageCacheRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT FlushStageCacheRequest : public ApiGatewayRequest {

public:
    FlushStageCacheRequest(const FlushStageCacheRequest &other);
    FlushStageCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FlushStageCacheRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
