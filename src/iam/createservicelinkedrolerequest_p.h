// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICELINKEDROLEREQUEST_P_H
#define QTAWS_CREATESERVICELINKEDROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "createservicelinkedrolerequest.h"

namespace QtAws {
namespace Iam {

class CreateServiceLinkedRoleRequest;

class CreateServiceLinkedRoleRequestPrivate : public IamRequestPrivate {

public:
    CreateServiceLinkedRoleRequestPrivate(const IamRequest::Action action,
                                   CreateServiceLinkedRoleRequest * const q);
    CreateServiceLinkedRoleRequestPrivate(const CreateServiceLinkedRoleRequestPrivate &other,
                                   CreateServiceLinkedRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceLinkedRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
