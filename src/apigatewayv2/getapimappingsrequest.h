// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGSREQUEST_H
#define QTAWS_GETAPIMAPPINGSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApiMappingsRequest : public ApiGatewayV2Request {

public:
    GetApiMappingsRequest(const GetApiMappingsRequest &other);
    GetApiMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiMappingsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
