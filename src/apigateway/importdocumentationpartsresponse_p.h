// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTDOCUMENTATIONPARTSRESPONSE_P_H
#define QTAWS_IMPORTDOCUMENTATIONPARTSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class ImportDocumentationPartsResponse;

class ImportDocumentationPartsResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit ImportDocumentationPartsResponsePrivate(ImportDocumentationPartsResponse * const q);

    void parseImportDocumentationPartsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportDocumentationPartsResponse)
    Q_DISABLE_COPY(ImportDocumentationPartsResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
