// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTEVENTPATTERNREQUEST_P_H
#define QTAWS_TESTEVENTPATTERNREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "testeventpatternrequest.h"

namespace QtAws {
namespace EventBridge {

class TestEventPatternRequest;

class TestEventPatternRequestPrivate : public EventBridgeRequestPrivate {

public:
    TestEventPatternRequestPrivate(const EventBridgeRequest::Action action,
                                   TestEventPatternRequest * const q);
    TestEventPatternRequestPrivate(const TestEventPatternRequestPrivate &other,
                                   TestEventPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestEventPatternRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
