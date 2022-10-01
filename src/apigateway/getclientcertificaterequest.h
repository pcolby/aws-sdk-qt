// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIENTCERTIFICATEREQUEST_H
#define QTAWS_GETCLIENTCERTIFICATEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetClientCertificateRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetClientCertificateRequest : public ApiGatewayRequest {

public:
    GetClientCertificateRequest(const GetClientCertificateRequest &other);
    GetClientCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClientCertificateRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
