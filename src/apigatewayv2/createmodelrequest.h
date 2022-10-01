// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELREQUEST_H
#define QTAWS_CREATEMODELREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateModelRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateModelRequest : public ApiGatewayV2Request {

public:
    CreateModelRequest(const CreateModelRequest &other);
    CreateModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
