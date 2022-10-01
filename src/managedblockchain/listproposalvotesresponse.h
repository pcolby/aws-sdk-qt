// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALVOTESRESPONSE_H
#define QTAWS_LISTPROPOSALVOTESRESPONSE_H

#include "managedblockchainresponse.h"
#include "listproposalvotesrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalVotesResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListProposalVotesResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    ListProposalVotesResponse(const ListProposalVotesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProposalVotesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProposalVotesResponse)
    Q_DISABLE_COPY(ListProposalVotesResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
