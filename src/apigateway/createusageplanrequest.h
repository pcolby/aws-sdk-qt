// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANREQUEST_H
#define QTAWS_CREATEUSAGEPLANREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateUsagePlanRequest : public ApiGatewayRequest {

public:
    CreateUsagePlanRequest(const CreateUsagePlanRequest &other);
    CreateUsagePlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsagePlanRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
