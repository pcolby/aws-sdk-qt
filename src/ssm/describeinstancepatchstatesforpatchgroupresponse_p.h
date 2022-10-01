// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESFORPATCHGROUPRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesForPatchGroupResponse;

class DescribeInstancePatchStatesForPatchGroupResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeInstancePatchStatesForPatchGroupResponsePrivate(DescribeInstancePatchStatesForPatchGroupResponse * const q);

    void parseDescribeInstancePatchStatesForPatchGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstancePatchStatesForPatchGroupResponse)
    Q_DISABLE_COPY(DescribeInstancePatchStatesForPatchGroupResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
