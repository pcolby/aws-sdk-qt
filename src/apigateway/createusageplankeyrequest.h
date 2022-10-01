// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANKEYREQUEST_H
#define QTAWS_CREATEUSAGEPLANKEYREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanKeyRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT CreateUsagePlanKeyRequest : public ApiGatewayRequest {

public:
    CreateUsagePlanKeyRequest(const CreateUsagePlanKeyRequest &other);
    CreateUsagePlanKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsagePlanKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
