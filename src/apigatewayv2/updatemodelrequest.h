// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELREQUEST_H
#define QTAWS_UPDATEMODELREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateModelRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateModelRequest : public ApiGatewayV2Request {

public:
    UpdateModelRequest(const UpdateModelRequest &other);
    UpdateModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
