// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUILDRESPONSE_P_H
#define QTAWS_DESCRIBEBUILDRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeBuildResponse;

class DescribeBuildResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeBuildResponsePrivate(DescribeBuildResponse * const q);

    void parseDescribeBuildResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBuildResponse)
    Q_DISABLE_COPY(DescribeBuildResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
