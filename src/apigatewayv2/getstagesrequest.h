// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGESREQUEST_H
#define QTAWS_GETSTAGESREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetStagesRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetStagesRequest : public ApiGatewayV2Request {

public:
    GetStagesRequest(const GetStagesRequest &other);
    GetStagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStagesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
