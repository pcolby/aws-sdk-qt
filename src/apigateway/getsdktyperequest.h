// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPEREQUEST_H
#define QTAWS_GETSDKTYPEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypeRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetSdkTypeRequest : public ApiGatewayRequest {

public:
    GetSdkTypeRequest(const GetSdkTypeRequest &other);
    GetSdkTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSdkTypeRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
