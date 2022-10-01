// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_RESETDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "resetdbclusterparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class ResetDBClusterParameterGroupRequest;

class ResetDBClusterParameterGroupRequestPrivate : public RdsRequestPrivate {

public:
    ResetDBClusterParameterGroupRequestPrivate(const RdsRequest::Action action,
                                   ResetDBClusterParameterGroupRequest * const q);
    ResetDBClusterParameterGroupRequestPrivate(const ResetDBClusterParameterGroupRequestPrivate &other,
                                   ResetDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetDBClusterParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
