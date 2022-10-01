// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPIDREQUEST_P_H
#define QTAWS_GETGROUPIDREQUEST_P_H

#include "identitystorerequest_p.h"
#include "getgroupidrequest.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupIdRequest;

class GetGroupIdRequestPrivate : public IdentityStoreRequestPrivate {

public:
    GetGroupIdRequestPrivate(const IdentityStoreRequest::Action action,
                                   GetGroupIdRequest * const q);
    GetGroupIdRequestPrivate(const GetGroupIdRequestPrivate &other,
                                   GetGroupIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupIdRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
