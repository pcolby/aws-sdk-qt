// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPARAMETERGROUPREQUEST_P_H
#define QTAWS_MODIFYDBPARAMETERGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBParameterGroupRequest;

class ModifyDBParameterGroupRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBParameterGroupRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBParameterGroupRequest * const q);
    ModifyDBParameterGroupRequestPrivate(const ModifyDBParameterGroupRequestPrivate &other,
                                   ModifyDBParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
