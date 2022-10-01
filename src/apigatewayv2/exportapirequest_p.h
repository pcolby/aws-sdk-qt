// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTAPIREQUEST_P_H
#define QTAWS_EXPORTAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "exportapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ExportApiRequest;

class ExportApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    ExportApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   ExportApiRequest * const q);
    ExportApiRequestPrivate(const ExportApiRequestPrivate &other,
                                   ExportApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
