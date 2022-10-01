// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCONFIGRESPONSE_P_H
#define QTAWS_UPDATESERVERCONFIGRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateServerConfigResponse;

class UpdateServerConfigResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit UpdateServerConfigResponsePrivate(UpdateServerConfigResponse * const q);

    void parseUpdateServerConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServerConfigResponse)
    Q_DISABLE_COPY(UpdateServerConfigResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
