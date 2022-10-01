// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALVOTESREQUEST_H
#define QTAWS_LISTPROPOSALVOTESREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalVotesRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListProposalVotesRequest : public ManagedBlockchainRequest {

public:
    ListProposalVotesRequest(const ListProposalVotesRequest &other);
    ListProposalVotesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProposalVotesRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
