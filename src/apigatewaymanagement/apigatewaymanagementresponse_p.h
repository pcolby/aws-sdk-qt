// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYMANAGEMENTRESPONSE_P_H
#define QTAWS_APIGATEWAYMANAGEMENTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApiGatewayManagement {

class ApiGatewayManagementResponse;

class ApiGatewayManagementResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApiGatewayManagementResponsePrivate(ApiGatewayManagementResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApiGatewayManagementResponse)
    Q_DISABLE_COPY(ApiGatewayManagementResponsePrivate)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
