// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNODERESPONSE_P_H
#define QTAWS_GETNODERESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNodeResponse;

class GetNodeResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit GetNodeResponsePrivate(GetNodeResponse * const q);

    void parseGetNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNodeResponse)
    Q_DISABLE_COPY(GetNodeResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
