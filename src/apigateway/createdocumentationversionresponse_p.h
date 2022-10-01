// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONVERSIONRESPONSE_P_H
#define QTAWS_CREATEDOCUMENTATIONVERSIONRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationVersionResponse;

class CreateDocumentationVersionResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateDocumentationVersionResponsePrivate(CreateDocumentationVersionResponse * const q);

    void parseCreateDocumentationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDocumentationVersionResponse)
    Q_DISABLE_COPY(CreateDocumentationVersionResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
