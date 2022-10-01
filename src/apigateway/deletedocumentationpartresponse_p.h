// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONPARTRESPONSE_P_H
#define QTAWS_DELETEDOCUMENTATIONPARTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationPartResponse;

class DeleteDocumentationPartResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteDocumentationPartResponsePrivate(DeleteDocumentationPartResponse * const q);

    void parseDeleteDocumentationPartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentationPartResponse)
    Q_DISABLE_COPY(DeleteDocumentationPartResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
