// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTRESPONSE_P_H
#define QTAWS_GETDOCUMENTATIONPARTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartResponse;

class GetDocumentationPartResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetDocumentationPartResponsePrivate(GetDocumentationPartResponse * const q);

    void parseGetDocumentationPartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentationPartResponse)
    Q_DISABLE_COPY(GetDocumentationPartResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
