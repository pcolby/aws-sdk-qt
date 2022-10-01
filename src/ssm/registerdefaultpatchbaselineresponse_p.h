// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEFAULTPATCHBASELINERESPONSE_P_H
#define QTAWS_REGISTERDEFAULTPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class RegisterDefaultPatchBaselineResponse;

class RegisterDefaultPatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit RegisterDefaultPatchBaselineResponsePrivate(RegisterDefaultPatchBaselineResponse * const q);

    void parseRegisterDefaultPatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterDefaultPatchBaselineResponse)
    Q_DISABLE_COPY(RegisterDefaultPatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
