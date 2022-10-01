// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIMAPPINGREQUEST_H
#define QTAWS_DELETEAPIMAPPINGREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiMappingRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteApiMappingRequest : public ApiGatewayV2Request {

public:
    DeleteApiMappingRequest(const DeleteApiMappingRequest &other);
    DeleteApiMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
