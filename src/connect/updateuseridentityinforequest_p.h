// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERIDENTITYINFOREQUEST_P_H
#define QTAWS_UPDATEUSERIDENTITYINFOREQUEST_P_H

#include "connectrequest_p.h"
#include "updateuseridentityinforequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserIdentityInfoRequest;

class UpdateUserIdentityInfoRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserIdentityInfoRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserIdentityInfoRequest * const q);
    UpdateUserIdentityInfoRequestPrivate(const UpdateUserIdentityInfoRequestPrivate &other,
                                   UpdateUserIdentityInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserIdentityInfoRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
