// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEREQUEST_P_H
#define QTAWS_UPDATEROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "updaterolerequest.h"

namespace QtAws {
namespace Iam {

class UpdateRoleRequest;

class UpdateRoleRequestPrivate : public IamRequestPrivate {

public:
    UpdateRoleRequestPrivate(const IamRequest::Action action,
                                   UpdateRoleRequest * const q);
    UpdateRoleRequestPrivate(const UpdateRoleRequestPrivate &other,
                                   UpdateRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
