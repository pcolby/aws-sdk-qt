// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONSRESPONSE_P_H
#define QTAWS_GETDOCUMENTATIONVERSIONSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionsResponse;

class GetDocumentationVersionsResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetDocumentationVersionsResponsePrivate(GetDocumentationVersionsResponse * const q);

    void parseGetDocumentationVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentationVersionsResponse)
    Q_DISABLE_COPY(GetDocumentationVersionsResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
