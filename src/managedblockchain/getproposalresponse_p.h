// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPOSALRESPONSE_P_H
#define QTAWS_GETPROPOSALRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetProposalResponse;

class GetProposalResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit GetProposalResponsePrivate(GetProposalResponse * const q);

    void parseGetProposalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProposalResponse)
    Q_DISABLE_COPY(GetProposalResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
