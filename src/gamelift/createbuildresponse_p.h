// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUILDRESPONSE_P_H
#define QTAWS_CREATEBUILDRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateBuildResponse;

class CreateBuildResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateBuildResponsePrivate(CreateBuildResponse * const q);

    void parseCreateBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBuildResponse)
    Q_DISABLE_COPY(CreateBuildResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
