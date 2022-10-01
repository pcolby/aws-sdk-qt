// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROPOSALRESPONSE_P_H
#define QTAWS_CREATEPROPOSALRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateProposalResponse;

class CreateProposalResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit CreateProposalResponsePrivate(CreateProposalResponse * const q);

    void parseCreateProposalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProposalResponse)
    Q_DISABLE_COPY(CreateProposalResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
