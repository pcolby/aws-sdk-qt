// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERREQUEST_P_H
#define QTAWS_CREATEMEMBERREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "creatememberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateMemberRequest;

class CreateMemberRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    CreateMemberRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   CreateMemberRequest * const q);
    CreateMemberRequestPrivate(const CreateMemberRequestPrivate &other,
                                   CreateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
