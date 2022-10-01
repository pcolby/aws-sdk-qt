// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSREQUEST_H
#define QTAWS_LISTMEMBERSREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListMembersRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListMembersRequest : public ManagedBlockchainRequest {

public:
    ListMembersRequest(const ListMembersRequest &other);
    ListMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMembersRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
