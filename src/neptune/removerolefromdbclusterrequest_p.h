// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBCLUSTERREQUEST_P_H
#define QTAWS_REMOVEROLEFROMDBCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "removerolefromdbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class RemoveRoleFromDBClusterRequest;

class RemoveRoleFromDBClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    RemoveRoleFromDBClusterRequestPrivate(const NeptuneRequest::Action action,
                                   RemoveRoleFromDBClusterRequest * const q);
    RemoveRoleFromDBClusterRequestPrivate(const RemoveRoleFromDBClusterRequestPrivate &other,
                                   RemoveRoleFromDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
