// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESPONSE_P_H
#define QTAWS_GETNETWORKRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNetworkResponse;

class GetNetworkResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit GetNetworkResponsePrivate(GetNetworkResponse * const q);

    void parseGetNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkResponse)
    Q_DISABLE_COPY(GetNetworkResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
