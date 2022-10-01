// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAUTHORIZATIONRESPONSE_H
#define QTAWS_TESTAUTHORIZATIONRESPONSE_H

#include "iotresponse.h"
#include "testauthorizationrequest.h"

namespace QtAws {
namespace IoT {

class TestAuthorizationResponsePrivate;

class QTAWSIOT_EXPORT TestAuthorizationResponse : public IoTResponse {
    Q_OBJECT

public:
    TestAuthorizationResponse(const TestAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestAuthorizationResponse)
    Q_DISABLE_COPY(TestAuthorizationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
