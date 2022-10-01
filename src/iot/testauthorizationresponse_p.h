// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAUTHORIZATIONRESPONSE_P_H
#define QTAWS_TESTAUTHORIZATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class TestAuthorizationResponse;

class TestAuthorizationResponsePrivate : public IoTResponsePrivate {

public:

    explicit TestAuthorizationResponsePrivate(TestAuthorizationResponse * const q);

    void parseTestAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestAuthorizationResponse)
    Q_DISABLE_COPY(TestAuthorizationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
