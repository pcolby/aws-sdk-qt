// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "createdbclusterparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterParameterGroupRequest;

class CreateDBClusterParameterGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    CreateDBClusterParameterGroupRequestPrivate(const NeptuneRequest::Action action,
                                   CreateDBClusterParameterGroupRequest * const q);
    CreateDBClusterParameterGroupRequestPrivate(const CreateDBClusterParameterGroupRequestPrivate &other,
                                   CreateDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
