// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONVERSIONRESPONSE_P_H
#define QTAWS_UPDATEDOCUMENTATIONVERSIONRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationVersionResponse;

class UpdateDocumentationVersionResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateDocumentationVersionResponsePrivate(UpdateDocumentationVersionResponse * const q);

    void parseUpdateDocumentationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentationVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentationVersionResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
