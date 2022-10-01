// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTSEGMENTPATTERNREQUEST_P_H
#define QTAWS_TESTSEGMENTPATTERNREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "testsegmentpatternrequest.h"

namespace QtAws {
namespace Evidently {

class TestSegmentPatternRequest;

class TestSegmentPatternRequestPrivate : public EvidentlyRequestPrivate {

public:
    TestSegmentPatternRequestPrivate(const EvidentlyRequest::Action action,
                                   TestSegmentPatternRequest * const q);
    TestSegmentPatternRequestPrivate(const TestSegmentPatternRequestPrivate &other,
                                   TestSegmentPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestSegmentPatternRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
