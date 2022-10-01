// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERREQUEST_P_H
#define QTAWS_GETMEMBERREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "getmemberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetMemberRequest;

class GetMemberRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    GetMemberRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   GetMemberRequest * const q);
    GetMemberRequestPrivate(const GetMemberRequestPrivate &other,
                                   GetMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
