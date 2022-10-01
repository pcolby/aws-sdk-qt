// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERIDREQUEST_P_H
#define QTAWS_GETUSERIDREQUEST_P_H

#include "identitystorerequest_p.h"
#include "getuseridrequest.h"

namespace QtAws {
namespace IdentityStore {

class GetUserIdRequest;

class GetUserIdRequestPrivate : public IdentityStoreRequestPrivate {

public:
    GetUserIdRequestPrivate(const IdentityStoreRequest::Action action,
                                   GetUserIdRequest * const q);
    GetUserIdRequestPrivate(const GetUserIdRequestPrivate &other,
                                   GetUserIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserIdRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
