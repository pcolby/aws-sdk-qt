// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORSREQUEST_H
#define QTAWS_GETREQUESTVALIDATORSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorsRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetRequestValidatorsRequest : public ApiGatewayRequest {

public:
    GetRequestValidatorsRequest(const GetRequestValidatorsRequest &other);
    GetRequestValidatorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRequestValidatorsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
