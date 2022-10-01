// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGERESPONSE_P_H
#define QTAWS_DELETESTAGERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteStageResponse;

class DeleteStageResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteStageResponsePrivate(DeleteStageResponse * const q);

    void parseDeleteStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStageResponse)
    Q_DISABLE_COPY(DeleteStageResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
