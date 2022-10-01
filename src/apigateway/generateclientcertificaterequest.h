// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECLIENTCERTIFICATEREQUEST_H
#define QTAWS_GENERATECLIENTCERTIFICATEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GenerateClientCertificateRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GenerateClientCertificateRequest : public ApiGatewayRequest {

public:
    GenerateClientCertificateRequest(const GenerateClientCertificateRequest &other);
    GenerateClientCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
