// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYMANAGEMENTRESPONSE_H
#define QTAWS_APIGATEWAYMANAGEMENTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapigatewaymanagementglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApiGatewayManagement {

class ApiGatewayManagementResponsePrivate;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT ApiGatewayManagementResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApiGatewayManagementResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ApiGatewayManagementResponse(ApiGatewayManagementResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApiGatewayManagementResponse)
    Q_DISABLE_COPY(ApiGatewayManagementResponse)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
