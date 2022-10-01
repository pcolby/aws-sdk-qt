// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERPARAMETERGROUPRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERPARAMETERGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterParameterGroupResponse;

class CreateDBClusterParameterGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBClusterParameterGroupResponsePrivate(CreateDBClusterParameterGroupResponse * const q);

    void parseCreateDBClusterParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(CreateDBClusterParameterGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
