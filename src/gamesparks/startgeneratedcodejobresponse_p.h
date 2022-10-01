// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGENERATEDCODEJOBRESPONSE_P_H
#define QTAWS_STARTGENERATEDCODEJOBRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class StartGeneratedCodeJobResponse;

class StartGeneratedCodeJobResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit StartGeneratedCodeJobResponsePrivate(StartGeneratedCodeJobResponse * const q);

    void parseStartGeneratedCodeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartGeneratedCodeJobResponse)
    Q_DISABLE_COPY(StartGeneratedCodeJobResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
