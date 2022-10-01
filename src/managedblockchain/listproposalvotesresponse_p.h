// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALVOTESRESPONSE_P_H
#define QTAWS_LISTPROPOSALVOTESRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalVotesResponse;

class ListProposalVotesResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit ListProposalVotesResponsePrivate(ListProposalVotesResponse * const q);

    void parseListProposalVotesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProposalVotesResponse)
    Q_DISABLE_COPY(ListProposalVotesResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
