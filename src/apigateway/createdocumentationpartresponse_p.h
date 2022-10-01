// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONPARTRESPONSE_P_H
#define QTAWS_CREATEDOCUMENTATIONPARTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationPartResponse;

class CreateDocumentationPartResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateDocumentationPartResponsePrivate(CreateDocumentationPartResponse * const q);

    void parseCreateDocumentationPartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDocumentationPartResponse)
    Q_DISABLE_COPY(CreateDocumentationPartResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
