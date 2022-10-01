// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREQUESTVALIDATORREQUEST_H
#define QTAWS_DELETEREQUESTVALIDATORREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRequestValidatorRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteRequestValidatorRequest : public ApiGatewayRequest {

public:
    DeleteRequestValidatorRequest(const DeleteRequestValidatorRequest &other);
    DeleteRequestValidatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
