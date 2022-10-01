// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPARAMETERGROUPRESPONSE_P_H
#define QTAWS_MODIFYDBPARAMETERGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBParameterGroupResponse;

class ModifyDBParameterGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBParameterGroupResponsePrivate(ModifyDBParameterGroupResponse * const q);

    void parseModifyDBParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBParameterGroupResponse)
    Q_DISABLE_COPY(ModifyDBParameterGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
