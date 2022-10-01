// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETEDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterParameterGroupResponse;

class DeleteDBClusterParameterGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBClusterParameterGroupResponsePrivate(DeleteDBClusterParameterGroupResponse * const q);

    void parseDeleteDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(DeleteDBClusterParameterGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
