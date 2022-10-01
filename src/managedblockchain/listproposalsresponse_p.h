// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALSRESPONSE_P_H
#define QTAWS_LISTPROPOSALSRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalsResponse;

class ListProposalsResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit ListProposalsResponsePrivate(ListProposalsResponse * const q);

    void parseListProposalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProposalsResponse)
    Q_DISABLE_COPY(ListProposalsResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
