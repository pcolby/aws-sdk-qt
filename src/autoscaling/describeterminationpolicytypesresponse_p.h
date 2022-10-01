// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETERMINATIONPOLICYTYPESRESPONSE_P_H
#define QTAWS_DESCRIBETERMINATIONPOLICYTYPESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeTerminationPolicyTypesResponse;

class DescribeTerminationPolicyTypesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeTerminationPolicyTypesResponsePrivate(DescribeTerminationPolicyTypesResponse * const q);

    void parseDescribeTerminationPolicyTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTerminationPolicyTypesResponse)
    Q_DISABLE_COPY(DescribeTerminationPolicyTypesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
