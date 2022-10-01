// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGROLEREQUEST_P_H
#define QTAWS_UNTAGROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "untagrolerequest.h"

namespace QtAws {
namespace Iam {

class UntagRoleRequest;

class UntagRoleRequestPrivate : public IamRequestPrivate {

public:
    UntagRoleRequestPrivate(const IamRequest::Action action,
                                   UntagRoleRequest * const q);
    UntagRoleRequestPrivate(const UntagRoleRequestPrivate &other,
                                   UntagRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
