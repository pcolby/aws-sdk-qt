// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREQUESTVALIDATORRESPONSE_P_H
#define QTAWS_DELETEREQUESTVALIDATORRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRequestValidatorResponse;

class DeleteRequestValidatorResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteRequestValidatorResponsePrivate(DeleteRequestValidatorResponse * const q);

    void parseDeleteRequestValidatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRequestValidatorResponse)
    Q_DISABLE_COPY(DeleteRequestValidatorResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
