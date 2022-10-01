// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLEREQUEST_P_H
#define QTAWS_GETROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "getrolerequest.h"

namespace QtAws {
namespace Iam {

class GetRoleRequest;

class GetRoleRequestPrivate : public IamRequestPrivate {

public:
    GetRoleRequestPrivate(const IamRequest::Action action,
                                   GetRoleRequest * const q);
    GetRoleRequestPrivate(const GetRoleRequestPrivate &other,
                                   GetRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
