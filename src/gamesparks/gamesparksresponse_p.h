// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMESPARKSRESPONSE_P_H
#define QTAWS_GAMESPARKSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GameSparksResponse;

class GameSparksResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GameSparksResponsePrivate(GameSparksResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GameSparksResponse)
    Q_DISABLE_COPY(GameSparksResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
