// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTRESPONSE_P_H
#define QTAWS_GETEXPORTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetExportResponse;

class GetExportResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetExportResponsePrivate(GetExportResponse * const q);

    void parseGetExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExportResponse)
    Q_DISABLE_COPY(GetExportResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
