// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesResponse;

class DescribeInstancePatchStatesResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeInstancePatchStatesResponsePrivate(DescribeInstancePatchStatesResponse * const q);

    void parseDescribeInstancePatchStatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstancePatchStatesResponse)
    Q_DISABLE_COPY(DescribeInstancePatchStatesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
