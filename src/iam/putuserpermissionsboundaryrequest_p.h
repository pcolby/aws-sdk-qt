// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERPERMISSIONSBOUNDARYREQUEST_P_H
#define QTAWS_PUTUSERPERMISSIONSBOUNDARYREQUEST_P_H

#include "iamrequest_p.h"
#include "putuserpermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class PutUserPermissionsBoundaryRequest;

class PutUserPermissionsBoundaryRequestPrivate : public IamRequestPrivate {

public:
    PutUserPermissionsBoundaryRequestPrivate(const IamRequest::Action action,
                                   PutUserPermissionsBoundaryRequest * const q);
    PutUserPermissionsBoundaryRequestPrivate(const PutUserPermissionsBoundaryRequestPrivate &other,
                                   PutUserPermissionsBoundaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutUserPermissionsBoundaryRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
