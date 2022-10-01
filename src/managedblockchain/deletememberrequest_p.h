// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERREQUEST_P_H
#define QTAWS_DELETEMEMBERREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "deletememberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class DeleteMemberRequest;

class DeleteMemberRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    DeleteMemberRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   DeleteMemberRequest * const q);
    DeleteMemberRequestPrivate(const DeleteMemberRequestPrivate &other,
                                   DeleteMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
