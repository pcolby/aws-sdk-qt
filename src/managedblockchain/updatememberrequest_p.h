// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERREQUEST_P_H
#define QTAWS_UPDATEMEMBERREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "updatememberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateMemberRequest;

class UpdateMemberRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    UpdateMemberRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   UpdateMemberRequest * const q);
    UpdateMemberRequestPrivate(const UpdateMemberRequestPrivate &other,
                                   UpdateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
