// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEGAMECONFIGURATIONRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameConfigurationResponse;

class UpdateGameConfigurationResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit UpdateGameConfigurationResponsePrivate(UpdateGameConfigurationResponse * const q);

    void parseUpdateGameConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGameConfigurationResponse)
    Q_DISABLE_COPY(UpdateGameConfigurationResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
