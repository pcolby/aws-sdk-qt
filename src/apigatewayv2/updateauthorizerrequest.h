// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERREQUEST_H
#define QTAWS_UPDATEAUTHORIZERREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateAuthorizerRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateAuthorizerRequest : public ApiGatewayV2Request {

public:
    UpdateAuthorizerRequest(const UpdateAuthorizerRequest &other);
    UpdateAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
