// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONVERSIONRESPONSE_P_H
#define QTAWS_DELETEDOCUMENTATIONVERSIONRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationVersionResponse;

class DeleteDocumentationVersionResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteDocumentationVersionResponsePrivate(DeleteDocumentationVersionResponse * const q);

    void parseDeleteDocumentationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentationVersionResponse)
    Q_DISABLE_COPY(DeleteDocumentationVersionResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
