// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPIKEYSRESPONSE_P_H
#define QTAWS_IMPORTAPIKEYSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class ImportApiKeysResponse;

class ImportApiKeysResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit ImportApiKeysResponsePrivate(ImportApiKeysResponse * const q);

    void parseImportApiKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportApiKeysResponse)
    Q_DISABLE_COPY(ImportApiKeysResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
