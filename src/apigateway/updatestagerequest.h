// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGEREQUEST_H
#define QTAWS_UPDATESTAGEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateStageRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateStageRequest : public ApiGatewayRequest {

public:
    UpdateStageRequest(const UpdateStageRequest &other);
    UpdateStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
