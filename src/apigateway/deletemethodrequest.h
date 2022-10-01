// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODREQUEST_H
#define QTAWS_DELETEMETHODREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteMethodRequest : public ApiGatewayRequest {

public:
    DeleteMethodRequest(const DeleteMethodRequest &other);
    DeleteMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
