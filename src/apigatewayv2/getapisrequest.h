// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPISREQUEST_H
#define QTAWS_GETAPISREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApisRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApisRequest : public ApiGatewayV2Request {

public:
    GetApisRequest(const GetApisRequest &other);
    GetApisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApisRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
