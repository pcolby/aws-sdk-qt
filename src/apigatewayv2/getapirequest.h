// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIREQUEST_H
#define QTAWS_GETAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetApiRequest : public ApiGatewayV2Request {

public:
    GetApiRequest(const GetApiRequest &other);
    GetApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
