// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIMAPPINGREQUEST_H
#define QTAWS_CREATEAPIMAPPINGREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiMappingRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateApiMappingRequest : public ApiGatewayV2Request {

public:
    CreateApiMappingRequest(const CreateApiMappingRequest &other);
    CreateApiMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
