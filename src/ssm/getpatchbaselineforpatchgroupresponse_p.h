// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINEFORPATCHGROUPRESPONSE_P_H
#define QTAWS_GETPATCHBASELINEFORPATCHGROUPRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineForPatchGroupResponse;

class GetPatchBaselineForPatchGroupResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetPatchBaselineForPatchGroupResponsePrivate(GetPatchBaselineForPatchGroupResponse * const q);

    void parseGetPatchBaselineForPatchGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPatchBaselineForPatchGroupResponse)
    Q_DISABLE_COPY(GetPatchBaselineForPatchGroupResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
