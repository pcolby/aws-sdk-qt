// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPATCHBASELINERESPONSE_P_H
#define QTAWS_CREATEPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreatePatchBaselineResponse;

class CreatePatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreatePatchBaselineResponsePrivate(CreatePatchBaselineResponse * const q);

    void parseCreatePatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePatchBaselineResponse)
    Q_DISABLE_COPY(CreatePatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
