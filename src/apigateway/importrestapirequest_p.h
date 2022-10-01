// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESTAPIREQUEST_P_H
#define QTAWS_IMPORTRESTAPIREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "importrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportRestApiRequest;

class ImportRestApiRequestPrivate : public ApiGatewayRequestPrivate {

public:
    ImportRestApiRequestPrivate(const ApiGatewayRequest::Action action,
                                   ImportRestApiRequest * const q);
    ImportRestApiRequestPrivate(const ImportRestApiRequestPrivate &other,
                                   ImportRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
