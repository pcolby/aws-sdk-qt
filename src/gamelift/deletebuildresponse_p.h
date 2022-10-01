// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDRESPONSE_P_H
#define QTAWS_DELETEBUILDRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteBuildResponse;

class DeleteBuildResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteBuildResponsePrivate(DeleteBuildResponse * const q);

    void parseDeleteBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBuildResponse)
    Q_DISABLE_COPY(DeleteBuildResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
