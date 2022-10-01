// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTAGERESPONSE_P_H
#define QTAWS_CREATESTAGERESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class CreateStageResponse;

class CreateStageResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit CreateStageResponsePrivate(CreateStageResponse * const q);

    void parseCreateStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStageResponse)
    Q_DISABLE_COPY(CreateStageResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
