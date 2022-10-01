// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTSEGMENTPATTERNRESPONSE_P_H
#define QTAWS_TESTSEGMENTPATTERNRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class TestSegmentPatternResponse;

class TestSegmentPatternResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit TestSegmentPatternResponsePrivate(TestSegmentPatternResponse * const q);

    void parseTestSegmentPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestSegmentPatternResponse)
    Q_DISABLE_COPY(TestSegmentPatternResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
