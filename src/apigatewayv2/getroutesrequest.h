// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTESREQUEST_H
#define QTAWS_GETROUTESREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRoutesRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRoutesRequest : public ApiGatewayV2Request {

public:
    GetRoutesRequest(const GetRoutesRequest &other);
    GetRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoutesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
