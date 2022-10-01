// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERPARAMETERGROUPREQUEST_P_H
#define QTAWS_MODIFYDBCLUSTERPARAMETERGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbclusterparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterParameterGroupRequest;

class ModifyDBClusterParameterGroupRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBClusterParameterGroupRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBClusterParameterGroupRequest * const q);
    ModifyDBClusterParameterGroupRequestPrivate(const ModifyDBClusterParameterGroupRequestPrivate &other,
                                   ModifyDBClusterParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
