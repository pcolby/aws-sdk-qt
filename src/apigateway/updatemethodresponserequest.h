// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODRESPONSEREQUEST_H
#define QTAWS_UPDATEMETHODRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateMethodResponseRequest : public ApiGatewayRequest {

public:
    UpdateMethodResponseRequest(const UpdateMethodResponseRequest &other);
    UpdateMethodResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
