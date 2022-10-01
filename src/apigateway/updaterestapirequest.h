// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESTAPIREQUEST_H
#define QTAWS_UPDATERESTAPIREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRestApiRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateRestApiRequest : public ApiGatewayRequest {

public:
    UpdateRestApiRequest(const UpdateRestApiRequest &other);
    UpdateRestApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
