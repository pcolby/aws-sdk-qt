// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEPATCHESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchesResponse;

class DescribeInstancePatchesResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeInstancePatchesResponsePrivate(DescribeInstancePatchesResponse * const q);

    void parseDescribeInstancePatchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstancePatchesResponse)
    Q_DISABLE_COPY(DescribeInstancePatchesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
