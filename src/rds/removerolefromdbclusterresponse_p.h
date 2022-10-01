// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBCLUSTERRESPONSE_P_H
#define QTAWS_REMOVEROLEFROMDBCLUSTERRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBClusterResponse;

class RemoveRoleFromDBClusterResponsePrivate : public RdsResponsePrivate {

public:

    explicit RemoveRoleFromDBClusterResponsePrivate(RemoveRoleFromDBClusterResponse * const q);

    void parseRemoveRoleFromDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromDBClusterResponse)
    Q_DISABLE_COPY(RemoveRoleFromDBClusterResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
