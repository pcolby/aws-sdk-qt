// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMINSTANCEPROFILEREQUEST_P_H
#define QTAWS_REMOVEROLEFROMINSTANCEPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "removerolefrominstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class RemoveRoleFromInstanceProfileRequest;

class RemoveRoleFromInstanceProfileRequestPrivate : public IamRequestPrivate {

public:
    RemoveRoleFromInstanceProfileRequestPrivate(const IamRequest::Action action,
                                   RemoveRoleFromInstanceProfileRequest * const q);
    RemoveRoleFromInstanceProfileRequestPrivate(const RemoveRoleFromInstanceProfileRequestPrivate &other,
                                   RemoveRoleFromInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromInstanceProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
