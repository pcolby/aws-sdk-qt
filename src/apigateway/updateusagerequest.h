// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGEREQUEST_H
#define QTAWS_UPDATEUSAGEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateUsageRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateUsageRequest : public ApiGatewayRequest {

public:
    UpdateUsageRequest(const UpdateUsageRequest &other);
    UpdateUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUsageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
