// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOTEONPROPOSALREQUEST_H
#define QTAWS_VOTEONPROPOSALREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class VoteOnProposalRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT VoteOnProposalRequest : public ManagedBlockchainRequest {

public:
    VoteOnProposalRequest(const VoteOnProposalRequest &other);
    VoteOnProposalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VoteOnProposalRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
