// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEANALYSISPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisPermissionsResponse;

class DescribeAnalysisPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeAnalysisPermissionsResponsePrivate(DescribeAnalysisPermissionsResponse * const q);

    void parseDescribeAnalysisPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnalysisPermissionsResponse)
    Q_DISABLE_COPY(DescribeAnalysisPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
