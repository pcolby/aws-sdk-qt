// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPATCHBASELINERESPONSE_P_H
#define QTAWS_GETPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetPatchBaselineResponse;

class GetPatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetPatchBaselineResponsePrivate(GetPatchBaselineResponse * const q);

    void parseGetPatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPatchBaselineResponse)
    Q_DISABLE_COPY(GetPatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
