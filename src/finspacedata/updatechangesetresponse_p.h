// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANGESETRESPONSE_P_H
#define QTAWS_UPDATECHANGESETRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class UpdateChangesetResponse;

class UpdateChangesetResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit UpdateChangesetResponsePrivate(UpdateChangesetResponse * const q);

    void parseUpdateChangesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChangesetResponse)
    Q_DISABLE_COPY(UpdateChangesetResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
