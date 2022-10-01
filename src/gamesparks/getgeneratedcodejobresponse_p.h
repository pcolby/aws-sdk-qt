// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDCODEJOBRESPONSE_P_H
#define QTAWS_GETGENERATEDCODEJOBRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetGeneratedCodeJobResponse;

class GetGeneratedCodeJobResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetGeneratedCodeJobResponsePrivate(GetGeneratedCodeJobResponse * const q);

    void parseGetGeneratedCodeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGeneratedCodeJobResponse)
    Q_DISABLE_COPY(GetGeneratedCodeJobResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
