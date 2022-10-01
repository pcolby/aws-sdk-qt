// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REIMPORTAPIREQUEST_P_H
#define QTAWS_REIMPORTAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "reimportapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ReimportApiRequest;

class ReimportApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    ReimportApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   ReimportApiRequest * const q);
    ReimportApiRequestPrivate(const ReimportApiRequestPrivate &other,
                                   ReimportApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReimportApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
