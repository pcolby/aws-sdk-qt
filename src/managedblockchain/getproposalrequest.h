// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPOSALREQUEST_H
#define QTAWS_GETPROPOSALREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetProposalRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT GetProposalRequest : public ManagedBlockchainRequest {

public:
    GetProposalRequest(const GetProposalRequest &other);
    GetProposalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProposalRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
