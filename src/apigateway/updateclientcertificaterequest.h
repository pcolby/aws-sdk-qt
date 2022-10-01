// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLIENTCERTIFICATEREQUEST_H
#define QTAWS_UPDATECLIENTCERTIFICATEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateClientCertificateRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateClientCertificateRequest : public ApiGatewayRequest {

public:
    UpdateClientCertificateRequest(const UpdateClientCertificateRequest &other);
    UpdateClientCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
