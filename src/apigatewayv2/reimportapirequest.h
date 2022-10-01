// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REIMPORTAPIREQUEST_H
#define QTAWS_REIMPORTAPIREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ReimportApiRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT ReimportApiRequest : public ApiGatewayV2Request {

public:
    ReimportApiRequest(const ReimportApiRequest &other);
    ReimportApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReimportApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
