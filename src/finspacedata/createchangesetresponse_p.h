// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANGESETRESPONSE_P_H
#define QTAWS_CREATECHANGESETRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class CreateChangesetResponse;

class CreateChangesetResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit CreateChangesetResponsePrivate(CreateChangesetResponse * const q);

    void parseCreateChangesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChangesetResponse)
    Q_DISABLE_COPY(CreateChangesetResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
