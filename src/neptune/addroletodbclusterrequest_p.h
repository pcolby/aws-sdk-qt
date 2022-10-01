// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBCLUSTERREQUEST_P_H
#define QTAWS_ADDROLETODBCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "addroletodbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class AddRoleToDBClusterRequest;

class AddRoleToDBClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    AddRoleToDBClusterRequestPrivate(const NeptuneRequest::Action action,
                                   AddRoleToDBClusterRequest * const q);
    AddRoleToDBClusterRequestPrivate(const AddRoleToDBClusterRequestPrivate &other,
                                   AddRoleToDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddRoleToDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
