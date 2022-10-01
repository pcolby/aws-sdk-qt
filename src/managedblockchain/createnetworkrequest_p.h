// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKREQUEST_P_H
#define QTAWS_CREATENETWORKREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "createnetworkrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNetworkRequest;

class CreateNetworkRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    CreateNetworkRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   CreateNetworkRequest * const q);
    CreateNetworkRequestPrivate(const CreateNetworkRequestPrivate &other,
                                   CreateNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
