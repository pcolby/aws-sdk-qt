// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEANALYSISPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeanalysispermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisPermissionsRequest;

class DescribeAnalysisPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeAnalysisPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeAnalysisPermissionsRequest * const q);
    DescribeAnalysisPermissionsRequestPrivate(const DescribeAnalysisPermissionsRequestPrivate &other,
                                   DescribeAnalysisPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnalysisPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
