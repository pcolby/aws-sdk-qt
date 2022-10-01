// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGEREQUEST_H
#define QTAWS_UPDATESTAGEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateStageRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateStageRequest : public ApiGatewayV2Request {

public:
    UpdateStageRequest(const UpdateStageRequest &other);
    UpdateStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStageRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
