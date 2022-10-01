// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTREQUEST_P_H
#define QTAWS_GETEXPORTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getexportrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetExportRequest;

class GetExportRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetExportRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetExportRequest * const q);
    GetExportRequestPrivate(const GetExportRequestPrivate &other,
                                   GetExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExportRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
