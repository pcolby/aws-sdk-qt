// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBCLUSTERRESPONSE_P_H
#define QTAWS_REMOVEROLEFROMDBCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class RemoveRoleFromDBClusterResponse;

class RemoveRoleFromDBClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit RemoveRoleFromDBClusterResponsePrivate(RemoveRoleFromDBClusterResponse * const q);

    void parseRemoveRoleFromDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromDBClusterResponse)
    Q_DISABLE_COPY(RemoveRoleFromDBClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
