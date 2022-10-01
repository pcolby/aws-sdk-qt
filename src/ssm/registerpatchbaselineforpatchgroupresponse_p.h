// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_P_H
#define QTAWS_REGISTERPATCHBASELINEFORPATCHGROUPRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class RegisterPatchBaselineForPatchGroupResponse;

class RegisterPatchBaselineForPatchGroupResponsePrivate : public SsmResponsePrivate {

public:

    explicit RegisterPatchBaselineForPatchGroupResponsePrivate(RegisterPatchBaselineForPatchGroupResponse * const q);

    void parseRegisterPatchBaselineForPatchGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterPatchBaselineForPatchGroupResponse)
    Q_DISABLE_COPY(RegisterPatchBaselineForPatchGroupResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
