// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISREQUEST_P_H
#define QTAWS_DESCRIBEANALYSISREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAnalysisRequest;

class DescribeAnalysisRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeAnalysisRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeAnalysisRequest * const q);
    DescribeAnalysisRequestPrivate(const DescribeAnalysisRequestPrivate &other,
                                   DescribeAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
