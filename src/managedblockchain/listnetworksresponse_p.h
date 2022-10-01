// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSRESPONSE_P_H
#define QTAWS_LISTNETWORKSRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListNetworksResponse;

class ListNetworksResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit ListNetworksResponsePrivate(ListNetworksResponse * const q);

    void parseListNetworksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNetworksResponse)
    Q_DISABLE_COPY(ListNetworksResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
