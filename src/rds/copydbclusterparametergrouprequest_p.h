// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_COPYDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "copydbclusterparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class CopyDBClusterParameterGroupRequest;

class CopyDBClusterParameterGroupRequestPrivate : public RdsRequestPrivate {

public:
    CopyDBClusterParameterGroupRequestPrivate(const RdsRequest::Action action,
                                   CopyDBClusterParameterGroupRequest * const q);
    CopyDBClusterParameterGroupRequestPrivate(const CopyDBClusterParameterGroupRequestPrivate &other,
                                   CopyDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyDBClusterParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
