// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREQUESTVALIDATORRESPONSE_P_H
#define QTAWS_UPDATEREQUESTVALIDATORRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRequestValidatorResponse;

class UpdateRequestValidatorResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateRequestValidatorResponsePrivate(UpdateRequestValidatorResponse * const q);

    void parseUpdateRequestValidatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRequestValidatorResponse)
    Q_DISABLE_COPY(UpdateRequestValidatorResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
