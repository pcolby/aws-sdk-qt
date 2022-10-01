// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBEASSESSMENTTARGETSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTargetsResponse;

class DescribeAssessmentTargetsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeAssessmentTargetsResponsePrivate(DescribeAssessmentTargetsResponse * const q);

    void parseDescribeAssessmentTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssessmentTargetsResponse)
    Q_DISABLE_COPY(DescribeAssessmentTargetsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
