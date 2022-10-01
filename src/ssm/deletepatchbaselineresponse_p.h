// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPATCHBASELINERESPONSE_P_H
#define QTAWS_DELETEPATCHBASELINERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeletePatchBaselineResponse;

class DeletePatchBaselineResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeletePatchBaselineResponsePrivate(DeletePatchBaselineResponse * const q);

    void parseDeletePatchBaselineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePatchBaselineResponse)
    Q_DISABLE_COPY(DeletePatchBaselineResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
