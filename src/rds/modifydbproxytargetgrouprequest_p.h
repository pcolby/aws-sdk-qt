// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYTARGETGROUPREQUEST_P_H
#define QTAWS_MODIFYDBPROXYTARGETGROUPREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifydbproxytargetgrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyTargetGroupRequest;

class ModifyDBProxyTargetGroupRequestPrivate : public RdsRequestPrivate {

public:
    ModifyDBProxyTargetGroupRequestPrivate(const RdsRequest::Action action,
                                   ModifyDBProxyTargetGroupRequest * const q);
    ModifyDBProxyTargetGroupRequestPrivate(const ModifyDBProxyTargetGroupRequestPrivate &other,
                                   ModifyDBProxyTargetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyTargetGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
