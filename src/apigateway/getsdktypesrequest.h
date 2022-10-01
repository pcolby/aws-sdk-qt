// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPESREQUEST_H
#define QTAWS_GETSDKTYPESREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypesRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetSdkTypesRequest : public ApiGatewayRequest {

public:
    GetSdkTypesRequest(const GetSdkTypesRequest &other);
    GetSdkTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSdkTypesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
