// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTGAMECONFIGURATIONRESPONSE_P_H
#define QTAWS_IMPORTGAMECONFIGURATIONRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ImportGameConfigurationResponse;

class ImportGameConfigurationResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ImportGameConfigurationResponsePrivate(ImportGameConfigurationResponse * const q);

    void parseImportGameConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportGameConfigurationResponse)
    Q_DISABLE_COPY(ImportGameConfigurationResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
