// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISMEMBERINGROUPSREQUEST_P_H
#define QTAWS_ISMEMBERINGROUPSREQUEST_P_H

#include "identitystorerequest_p.h"
#include "ismemberingroupsrequest.h"

namespace QtAws {
namespace IdentityStore {

class IsMemberInGroupsRequest;

class IsMemberInGroupsRequestPrivate : public IdentityStoreRequestPrivate {

public:
    IsMemberInGroupsRequestPrivate(const IdentityStoreRequest::Action action,
                                   IsMemberInGroupsRequest * const q);
    IsMemberInGroupsRequestPrivate(const IsMemberInGroupsRequestPrivate &other,
                                   IsMemberInGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(IsMemberInGroupsRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
