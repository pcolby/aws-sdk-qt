// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGEREQUEST_H
#define QTAWS_DELETESTAGEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteStageRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteStageRequest : public ApiGatewayRequest {

public:
    DeleteStageRequest(const DeleteStageRequest &other);
    DeleteStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
