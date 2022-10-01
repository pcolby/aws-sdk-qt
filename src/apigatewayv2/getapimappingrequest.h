// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGREQUEST_H
#define QTAWS_GETAPIMAPPINGREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApiMappingRequest : public ApiGatewayV2Request {

public:
    GetApiMappingRequest(const GetApiMappingRequest &other);
    GetApiMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
