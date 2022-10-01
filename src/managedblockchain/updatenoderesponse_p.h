// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODERESPONSE_P_H
#define QTAWS_UPDATENODERESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateNodeResponse;

class UpdateNodeResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit UpdateNodeResponsePrivate(UpdateNodeResponse * const q);

    void parseUpdateNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNodeResponse)
    Q_DISABLE_COPY(UpdateNodeResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
