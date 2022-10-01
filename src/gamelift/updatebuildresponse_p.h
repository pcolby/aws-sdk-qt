// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUILDRESPONSE_P_H
#define QTAWS_UPDATEBUILDRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateBuildResponse;

class UpdateBuildResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateBuildResponsePrivate(UpdateBuildResponse * const q);

    void parseUpdateBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBuildResponse)
    Q_DISABLE_COPY(UpdateBuildResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
