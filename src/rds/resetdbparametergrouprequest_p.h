// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBPARAMETERGROUPREQUEST_P_H
#define QTAWS_RESETDBPARAMETERGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "resetdbparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class ResetDBParameterGroupRequest;

class ResetDBParameterGroupRequestPrivate : public RdsRequestPrivate {

public:
    ResetDBParameterGroupRequestPrivate(const RdsRequest::Action action,
                                   ResetDBParameterGroupRequest * const q);
    ResetDBParameterGroupRequestPrivate(const ResetDBParameterGroupRequestPrivate &other,
                                   ResetDBParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetDBParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
