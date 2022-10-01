// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPERMISSIONSBOUNDARYREQUEST_P_H
#define QTAWS_PUTROLEPERMISSIONSBOUNDARYREQUEST_P_H

#include "iamrequest_p.h"
#include "putrolepermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class PutRolePermissionsBoundaryRequest;

class PutRolePermissionsBoundaryRequestPrivate : public IamRequestPrivate {

public:
    PutRolePermissionsBoundaryRequestPrivate(const IamRequest::Action action,
                                   PutRolePermissionsBoundaryRequest * const q);
    PutRolePermissionsBoundaryRequestPrivate(const PutRolePermissionsBoundaryRequestPrivate &other,
                                   PutRolePermissionsBoundaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRolePermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
