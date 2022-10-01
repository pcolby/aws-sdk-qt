// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEMETHODRESPONSE_P_H
#define QTAWS_TESTINVOKEMETHODRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class TestInvokeMethodResponse;

class TestInvokeMethodResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit TestInvokeMethodResponsePrivate(TestInvokeMethodResponse * const q);

    void parseTestInvokeMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestInvokeMethodResponse)
    Q_DISABLE_COPY(TestInvokeMethodResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
