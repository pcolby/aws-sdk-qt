// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGERESPONSE_P_H
#define QTAWS_DELETESTAGERESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class DeleteStageResponse;

class DeleteStageResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit DeleteStageResponsePrivate(DeleteStageResponse * const q);

    void parseDeleteStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStageResponse)
    Q_DISABLE_COPY(DeleteStageResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
