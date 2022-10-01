// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIAMPOLICYASSIGNMENTRESPONSE_P_H
#define QTAWS_DESCRIBEIAMPOLICYASSIGNMENTRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeIAMPolicyAssignmentResponse;

class DescribeIAMPolicyAssignmentResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeIAMPolicyAssignmentResponsePrivate(DescribeIAMPolicyAssignmentResponse * const q);

    void parseDescribeIAMPolicyAssignmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIAMPolicyAssignmentResponse)
    Q_DISABLE_COPY(DescribeIAMPolicyAssignmentResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
