// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTPATCHBASELINERESPONSE_P_H
#define QTAWS_GETDEFAULTPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetDefaultPatchBaselineResponse;

class GetDefaultPatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetDefaultPatchBaselineResponsePrivate(GetDefaultPatchBaselineResponse * const q);

    void parseGetDefaultPatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDefaultPatchBaselineResponse)
    Q_DISABLE_COPY(GetDefaultPatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
