// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERREQUEST_P_H
#define QTAWS_GETUSERREQUEST_P_H

#include "iamrequest_p.h"
#include "getuserrequest.h"

namespace QtAws {
namespace Iam {

class GetUserRequest;

class GetUserRequestPrivate : public IamRequestPrivate {

public:
    GetUserRequestPrivate(const IamRequest::Action action,
                                   GetUserRequest * const q);
    GetUserRequestPrivate(const GetUserRequestPrivate &other,
                                   GetUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
