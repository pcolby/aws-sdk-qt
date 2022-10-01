// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIKEYSREQUEST_P_H
#define QTAWS_IMPORTAPIKEYSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "importapikeysrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportApiKeysRequest;

class ImportApiKeysRequestPrivate : public ApiGatewayRequestPrivate {

public:
    ImportApiKeysRequestPrivate(const ApiGatewayRequest::Action action,
                                   ImportApiKeysRequest * const q);
    ImportApiKeysRequestPrivate(const ImportApiKeysRequestPrivate &other,
                                   ImportApiKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportApiKeysRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
