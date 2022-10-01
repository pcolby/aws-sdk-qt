// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHORIZERREQUEST_H
#define QTAWS_DELETEAUTHORIZERREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAuthorizerRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteAuthorizerRequest : public ApiGatewayV2Request {

public:
    DeleteAuthorizerRequest(const DeleteAuthorizerRequest &other);
    DeleteAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
