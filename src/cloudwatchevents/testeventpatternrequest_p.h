// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTEVENTPATTERNREQUEST_P_H
#define QTAWS_TESTEVENTPATTERNREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "testeventpatternrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class TestEventPatternRequest;

class TestEventPatternRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    TestEventPatternRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   TestEventPatternRequest * const q);
    TestEventPatternRequestPrivate(const TestEventPatternRequestPrivate &other,
                                   TestEventPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestEventPatternRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
