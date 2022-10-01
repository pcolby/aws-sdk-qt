// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBPARAMETERGROUPRESPONSE_P_H
#define QTAWS_RESETDBPARAMETERGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ResetDBParameterGroupResponse;

class ResetDBParameterGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit ResetDBParameterGroupResponsePrivate(ResetDBParameterGroupResponse * const q);

    void parseResetDBParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetDBParameterGroupResponse)
    Q_DISABLE_COPY(ResetDBParameterGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
