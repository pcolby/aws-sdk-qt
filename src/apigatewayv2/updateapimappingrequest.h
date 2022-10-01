// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIMAPPINGREQUEST_H
#define QTAWS_UPDATEAPIMAPPINGREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiMappingRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateApiMappingRequest : public ApiGatewayV2Request {

public:
    UpdateApiMappingRequest(const UpdateApiMappingRequest &other);
    UpdateApiMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
