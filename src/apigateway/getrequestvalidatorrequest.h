// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORREQUEST_H
#define QTAWS_GETREQUESTVALIDATORREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetRequestValidatorRequest : public ApiGatewayRequest {

public:
    GetRequestValidatorRequest(const GetRequestValidatorRequest &other);
    GetRequestValidatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
