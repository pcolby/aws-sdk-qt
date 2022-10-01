// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNODEREQUEST_P_H
#define QTAWS_GETNODEREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "getnoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNodeRequest;

class GetNodeRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    GetNodeRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   GetNodeRequest * const q);
    GetNodeRequestPrivate(const GetNodeRequestPrivate &other,
                                   GetNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
