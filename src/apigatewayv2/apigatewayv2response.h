// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYV2RESPONSE_H
#define QTAWS_APIGATEWAYV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapigatewayv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2ResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT ApiGatewayV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApiGatewayV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    ApiGatewayV2Response(ApiGatewayV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApiGatewayV2Response)
    Q_DISABLE_COPY(ApiGatewayV2Response)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
