// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETGAMECONFIGURATIONRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetGameConfigurationResponse;

class GetGameConfigurationResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetGameConfigurationResponsePrivate(GetGameConfigurationResponse * const q);

    void parseGetGameConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGameConfigurationResponse)
    Q_DISABLE_COPY(GetGameConfigurationResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
