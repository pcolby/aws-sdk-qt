// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEREQUEST_P_H
#define QTAWS_UPDATENODEREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "updatenoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateNodeRequest;

class UpdateNodeRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    UpdateNodeRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   UpdateNodeRequest * const q);
    UpdateNodeRequestPrivate(const UpdateNodeRequestPrivate &other,
                                   UpdateNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
