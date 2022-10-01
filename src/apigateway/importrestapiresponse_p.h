// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESTAPIRESPONSE_P_H
#define QTAWS_IMPORTRESTAPIRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class ImportRestApiResponse;

class ImportRestApiResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit ImportRestApiResponsePrivate(ImportRestApiResponse * const q);

    void parseImportRestApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportRestApiResponse)
    Q_DISABLE_COPY(ImportRestApiResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
