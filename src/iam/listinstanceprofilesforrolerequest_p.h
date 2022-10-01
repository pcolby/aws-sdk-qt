// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESFORROLEREQUEST_P_H
#define QTAWS_LISTINSTANCEPROFILESFORROLEREQUEST_P_H

#include "iamrequest_p.h"
#include "listinstanceprofilesforrolerequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesForRoleRequest;

class ListInstanceProfilesForRoleRequestPrivate : public IamRequestPrivate {

public:
    ListInstanceProfilesForRoleRequestPrivate(const IamRequest::Action action,
                                   ListInstanceProfilesForRoleRequest * const q);
    ListInstanceProfilesForRoleRequestPrivate(const ListInstanceProfilesForRoleRequestPrivate &other,
                                   ListInstanceProfilesForRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfilesForRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
