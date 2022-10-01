// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODESRESPONSE_P_H
#define QTAWS_LISTNODESRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListNodesResponse;

class ListNodesResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit ListNodesResponsePrivate(ListNodesResponse * const q);

    void parseListNodesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNodesResponse)
    Q_DISABLE_COPY(ListNodesResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
