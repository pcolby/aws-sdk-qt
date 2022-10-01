// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTRACKDBCLUSTERRESPONSE_P_H
#define QTAWS_BACKTRACKDBCLUSTERRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class BacktrackDBClusterResponse;

class BacktrackDBClusterResponsePrivate : public RdsResponsePrivate {

public:

    explicit BacktrackDBClusterResponsePrivate(BacktrackDBClusterResponse * const q);

    void parseBacktrackDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BacktrackDBClusterResponse)
    Q_DISABLE_COPY(BacktrackDBClusterResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
