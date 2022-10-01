// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESTAPIREQUEST_H
#define QTAWS_PUTRESTAPIREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutRestApiRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT PutRestApiRequest : public ApiGatewayRequest {

public:
    PutRestApiRequest(const PutRestApiRequest &other);
    PutRestApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
