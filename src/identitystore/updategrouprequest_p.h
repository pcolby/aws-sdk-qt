// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPREQUEST_P_H
#define QTAWS_UPDATEGROUPREQUEST_P_H

#include "identitystorerequest_p.h"
#include "updategrouprequest.h"

namespace QtAws {
namespace IdentityStore {

class UpdateGroupRequest;

class UpdateGroupRequestPrivate : public IdentityStoreRequestPrivate {

public:
    UpdateGroupRequestPrivate(const IdentityStoreRequest::Action action,
                                   UpdateGroupRequest * const q);
    UpdateGroupRequestPrivate(const UpdateGroupRequestPrivate &other,
                                   UpdateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGroupRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
