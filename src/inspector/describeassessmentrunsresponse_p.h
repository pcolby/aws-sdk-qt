// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTRUNSRESPONSE_P_H
#define QTAWS_DESCRIBEASSESSMENTRUNSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentRunsResponse;

class DescribeAssessmentRunsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeAssessmentRunsResponsePrivate(DescribeAssessmentRunsResponse * const q);

    void parseDescribeAssessmentRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssessmentRunsResponse)
    Q_DISABLE_COPY(DescribeAssessmentRunsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
