// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODRESPONSEREQUEST_H
#define QTAWS_DELETEMETHODRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteMethodResponseRequest : public ApiGatewayRequest {

public:
    DeleteMethodResponseRequest(const DeleteMethodResponseRequest &other);
    DeleteMethodResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
