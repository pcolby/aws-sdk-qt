// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_P_H
#define QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeregisterPatchBaselineForPatchGroupResponse;

class DeregisterPatchBaselineForPatchGroupResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeregisterPatchBaselineForPatchGroupResponsePrivate(DeregisterPatchBaselineForPatchGroupResponse * const q);

    void parseDeregisterPatchBaselineForPatchGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterPatchBaselineForPatchGroupResponse)
    Q_DISABLE_COPY(DeregisterPatchBaselineForPatchGroupResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
