// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYRESPONSE_H
#define QTAWS_APIGATEWAYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapigatewayglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApiGateway {

class ApiGatewayResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT ApiGatewayResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApiGatewayResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ApiGatewayResponse(ApiGatewayResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApiGatewayResponse)
    Q_DISABLE_COPY(ApiGatewayResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
