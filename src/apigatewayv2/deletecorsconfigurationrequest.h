// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSCONFIGURATIONREQUEST_H
#define QTAWS_DELETECORSCONFIGURATIONREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteCorsConfigurationRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteCorsConfigurationRequest : public ApiGatewayV2Request {

public:
    DeleteCorsConfigurationRequest(const DeleteCorsConfigurationRequest &other);
    DeleteCorsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCorsConfigurationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
