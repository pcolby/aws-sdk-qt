// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEREQUEST_H
#define QTAWS_GETUSAGEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsageRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetUsageRequest : public ApiGatewayRequest {

public:
    GetUsageRequest(const GetUsageRequest &other);
    GetUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
