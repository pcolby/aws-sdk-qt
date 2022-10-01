// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINERESPONSE_P_H
#define QTAWS_DESCRIBEEFFECTIVEPATCHESFORPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectivePatchesForPatchBaselineResponse;

class DescribeEffectivePatchesForPatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeEffectivePatchesForPatchBaselineResponsePrivate(DescribeEffectivePatchesForPatchBaselineResponse * const q);

    void parseDescribeEffectivePatchesForPatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEffectivePatchesForPatchBaselineResponse)
    Q_DISABLE_COPY(DescribeEffectivePatchesForPatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
