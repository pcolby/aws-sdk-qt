// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPREQUEST_P_H
#define QTAWS_CREATEGROUPREQUEST_P_H

#include "identitystorerequest_p.h"
#include "creategrouprequest.h"

namespace QtAws {
namespace IdentityStore {

class CreateGroupRequest;

class CreateGroupRequestPrivate : public IdentityStoreRequestPrivate {

public:
    CreateGroupRequestPrivate(const IdentityStoreRequest::Action action,
                                   CreateGroupRequest * const q);
    CreateGroupRequestPrivate(const CreateGroupRequestPrivate &other,
                                   CreateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
