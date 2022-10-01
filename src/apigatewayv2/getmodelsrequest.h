// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSREQUEST_H
#define QTAWS_GETMODELSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetModelsRequest : public ApiGatewayV2Request {

public:
    GetModelsRequest(const GetModelsRequest &other);
    GetModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
