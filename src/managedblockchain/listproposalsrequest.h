// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALSREQUEST_H
#define QTAWS_LISTPROPOSALSREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalsRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListProposalsRequest : public ManagedBlockchainRequest {

public:
    ListProposalsRequest(const ListProposalsRequest &other);
    ListProposalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProposalsRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
