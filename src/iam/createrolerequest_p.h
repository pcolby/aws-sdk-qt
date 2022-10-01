// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLEREQUEST_P_H
#define QTAWS_CREATEROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "createrolerequest.h"

namespace QtAws {
namespace Iam {

class CreateRoleRequest;

class CreateRoleRequestPrivate : public IamRequestPrivate {

public:
    CreateRoleRequestPrivate(const IamRequest::Action action,
                                   CreateRoleRequest * const q);
    CreateRoleRequestPrivate(const CreateRoleRequestPrivate &other,
                                   CreateRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
