// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESTAPIREQUEST_H
#define QTAWS_DELETERESTAPIREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRestApiRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteRestApiRequest : public ApiGatewayRequest {

public:
    DeleteRestApiRequest(const DeleteRestApiRequest &other);
    DeleteRestApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
