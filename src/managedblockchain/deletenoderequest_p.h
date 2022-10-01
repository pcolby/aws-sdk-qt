// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODEREQUEST_P_H
#define QTAWS_DELETENODEREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "deletenoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class DeleteNodeRequest;

class DeleteNodeRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    DeleteNodeRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   DeleteNodeRequest * const q);
    DeleteNodeRequestPrivate(const DeleteNodeRequestPrivate &other,
                                   DeleteNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
