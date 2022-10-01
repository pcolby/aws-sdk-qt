// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYSREQUEST_H
#define QTAWS_GETUSAGEPLANKEYSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeysRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsagePlanKeysRequest : public ApiGatewayRequest {

public:
    GetUsagePlanKeysRequest(const GetUsagePlanKeysRequest &other);
    GetUsagePlanKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsagePlanKeysRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
