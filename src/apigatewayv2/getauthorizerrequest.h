// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERREQUEST_H
#define QTAWS_GETAUTHORIZERREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetAuthorizerRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetAuthorizerRequest : public ApiGatewayV2Request {

public:
    GetAuthorizerRequest(const GetAuthorizerRequest &other);
    GetAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
