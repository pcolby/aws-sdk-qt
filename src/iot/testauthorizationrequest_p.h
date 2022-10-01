// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAUTHORIZATIONREQUEST_P_H
#define QTAWS_TESTAUTHORIZATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "testauthorizationrequest.h"

namespace QtAws {
namespace IoT {

class TestAuthorizationRequest;

class TestAuthorizationRequestPrivate : public IoTRequestPrivate {

public:
    TestAuthorizationRequestPrivate(const IoTRequest::Action action,
                                   TestAuthorizationRequest * const q);
    TestAuthorizationRequestPrivate(const TestAuthorizationRequestPrivate &other,
                                   TestAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestAuthorizationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
