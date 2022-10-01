// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANREQUEST_H
#define QTAWS_GETUSAGEPLANREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlanRequest : public ApiGatewayRequest {

public:
    GetUsagePlanRequest(const GetUsagePlanRequest &other);
    GetUsagePlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlanRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
