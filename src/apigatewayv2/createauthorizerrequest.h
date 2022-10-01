// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERREQUEST_H
#define QTAWS_CREATEAUTHORIZERREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateAuthorizerRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateAuthorizerRequest : public ApiGatewayV2Request {

public:
    CreateAuthorizerRequest(const CreateAuthorizerRequest &other);
    CreateAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
