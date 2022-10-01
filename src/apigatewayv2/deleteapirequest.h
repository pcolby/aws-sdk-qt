// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIREQUEST_H
#define QTAWS_DELETEAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteApiRequest : public ApiGatewayV2Request {

public:
    DeleteApiRequest(const DeleteApiRequest &other);
    DeleteApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
