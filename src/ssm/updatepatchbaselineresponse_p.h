// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPATCHBASELINERESPONSE_P_H
#define QTAWS_UPDATEPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdatePatchBaselineResponse;

class UpdatePatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdatePatchBaselineResponsePrivate(UpdatePatchBaselineResponse * const q);

    void parseUpdatePatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePatchBaselineResponse)
    Q_DISABLE_COPY(UpdatePatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
