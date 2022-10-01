// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELTEMPLATEREQUEST_H
#define QTAWS_GETMODELTEMPLATEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelTemplateRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetModelTemplateRequest : public ApiGatewayV2Request {

public:
    GetModelTemplateRequest(const GetModelTemplateRequest &other);
    GetModelTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelTemplateRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
