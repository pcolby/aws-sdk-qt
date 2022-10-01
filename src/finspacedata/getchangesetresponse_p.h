// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGESETRESPONSE_P_H
#define QTAWS_GETCHANGESETRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetChangesetResponse;

class GetChangesetResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetChangesetResponsePrivate(GetChangesetResponse * const q);

    void parseGetChangesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChangesetResponse)
    Q_DISABLE_COPY(GetChangesetResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
