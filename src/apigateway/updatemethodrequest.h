// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODREQUEST_H
#define QTAWS_UPDATEMETHODREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateMethodRequest : public ApiGatewayRequest {

public:
    UpdateMethodRequest(const UpdateMethodRequest &other);
    UpdateMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
