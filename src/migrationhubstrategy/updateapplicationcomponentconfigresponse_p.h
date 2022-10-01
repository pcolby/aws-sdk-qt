// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGRESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateApplicationComponentConfigResponse;

class UpdateApplicationComponentConfigResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit UpdateApplicationComponentConfigResponsePrivate(UpdateApplicationComponentConfigResponse * const q);

    void parseUpdateApplicationComponentConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationComponentConfigResponse)
    Q_DISABLE_COPY(UpdateApplicationComponentConfigResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
