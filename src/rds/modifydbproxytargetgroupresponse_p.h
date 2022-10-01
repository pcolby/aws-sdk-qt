// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYTARGETGROUPRESPONSE_P_H
#define QTAWS_MODIFYDBPROXYTARGETGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyTargetGroupResponse;

class ModifyDBProxyTargetGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBProxyTargetGroupResponsePrivate(ModifyDBProxyTargetGroupResponse * const q);

    void parseModifyDBProxyTargetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyTargetGroupResponse)
    Q_DISABLE_COPY(ModifyDBProxyTargetGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
