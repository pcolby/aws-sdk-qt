// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOTEONPROPOSALRESPONSE_P_H
#define QTAWS_VOTEONPROPOSALRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class VoteOnProposalResponse;

class VoteOnProposalResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit VoteOnProposalResponsePrivate(VoteOnProposalResponse * const q);

    void parseVoteOnProposalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VoteOnProposalResponse)
    Q_DISABLE_COPY(VoteOnProposalResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
