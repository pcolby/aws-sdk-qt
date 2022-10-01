// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIREQUEST_P_H
#define QTAWS_IMPORTAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "importapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ImportApiRequest;

class ImportApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    ImportApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   ImportApiRequest * const q);
    ImportApiRequestPrivate(const ImportApiRequestPrivate &other,
                                   ImportApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
