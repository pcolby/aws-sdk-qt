// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYREQUEST_H
#define QTAWS_GETUSAGEPLANKEYREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeyRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlanKeyRequest : public ApiGatewayRequest {

public:
    GetUsagePlanKeyRequest(const GetUsagePlanKeyRequest &other);
    GetUsagePlanKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlanKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
