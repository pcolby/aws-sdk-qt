// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEREQUEST_P_H
#define QTAWS_CREATENODEREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "createnoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNodeRequest;

class CreateNodeRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    CreateNodeRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   CreateNodeRequest * const q);
    CreateNodeRequestPrivate(const CreateNodeRequestPrivate &other,
                                   CreateNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNodeRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
