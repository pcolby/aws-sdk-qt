// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISRESPONSE_P_H
#define QTAWS_DESCRIBEANALYSISRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisResponse;

class DescribeAnalysisResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeAnalysisResponsePrivate(DescribeAnalysisResponse * const q);

    void parseDescribeAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnalysisResponse)
    Q_DISABLE_COPY(DescribeAnalysisResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
