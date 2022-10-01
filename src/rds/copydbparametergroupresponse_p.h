// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBPARAMETERGROUPRESPONSE_P_H
#define QTAWS_COPYDBPARAMETERGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CopyDBParameterGroupResponse;

class CopyDBParameterGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit CopyDBParameterGroupResponsePrivate(CopyDBParameterGroupResponse * const q);

    void parseCopyDBParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyDBParameterGroupResponse)
    Q_DISABLE_COPY(CopyDBParameterGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
