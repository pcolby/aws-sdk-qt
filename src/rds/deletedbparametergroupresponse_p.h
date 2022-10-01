// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETEDBPARAMETERGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBParameterGroupResponse;

class DeleteDBParameterGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBParameterGroupResponsePrivate(DeleteDBParameterGroupResponse * const q);

    void parseDeleteDBParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBParameterGroupResponse)
    Q_DISABLE_COPY(DeleteDBParameterGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
