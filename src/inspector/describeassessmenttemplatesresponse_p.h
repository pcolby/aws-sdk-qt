// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTEMPLATESRESPONSE_P_H
#define QTAWS_DESCRIBEASSESSMENTTEMPLATESRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTemplatesResponse;

class DescribeAssessmentTemplatesResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeAssessmentTemplatesResponsePrivate(DescribeAssessmentTemplatesResponse * const q);

    void parseDescribeAssessmentTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssessmentTemplatesResponse)
    Q_DISABLE_COPY(DescribeAssessmentTemplatesResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
