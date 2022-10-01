// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIREQUEST_H
#define QTAWS_CREATEAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateApiRequest : public ApiGatewayV2Request {

public:
    CreateApiRequest(const CreateApiRequest &other);
    CreateApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
