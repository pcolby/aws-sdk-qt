// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELRESPONSE_P_H
#define QTAWS_DELETEMODELRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteModelResponse;

class DeleteModelResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteModelResponsePrivate(DeleteModelResponse * const q);

    void parseDeleteModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelResponse)
    Q_DISABLE_COPY(DeleteModelResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
