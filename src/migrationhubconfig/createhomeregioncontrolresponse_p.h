// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOMEREGIONCONTROLRESPONSE_P_H
#define QTAWS_CREATEHOMEREGIONCONTROLRESPONSE_P_H

#include "migrationhubconfigresponse_p.h"

namespace QtAws {
namespace MigrationHubConfig {

class CreateHomeRegionControlResponse;

class CreateHomeRegionControlResponsePrivate : public MigrationHubConfigResponsePrivate {

public:

    explicit CreateHomeRegionControlResponsePrivate(CreateHomeRegionControlResponse * const q);

    void parseCreateHomeRegionControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHomeRegionControlResponse)
    Q_DISABLE_COPY(CreateHomeRegionControlResponsePrivate)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
