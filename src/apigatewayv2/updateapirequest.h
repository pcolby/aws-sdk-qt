// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIREQUEST_H
#define QTAWS_UPDATEAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateApiRequest : public ApiGatewayV2Request {

public:
    UpdateApiRequest(const UpdateApiRequest &other);
    UpdateApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
