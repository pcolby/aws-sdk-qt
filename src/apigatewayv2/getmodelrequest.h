// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELREQUEST_H
#define QTAWS_GETMODELREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetModelRequest : public ApiGatewayV2Request {

public:
    GetModelRequest(const GetModelRequest &other);
    GetModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
