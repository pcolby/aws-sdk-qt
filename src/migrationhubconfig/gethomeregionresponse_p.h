// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOMEREGIONRESPONSE_P_H
#define QTAWS_GETHOMEREGIONRESPONSE_P_H

#include "migrationhubconfigresponse_p.h"

namespace QtAws {
namespace MigrationHubConfig {

class GetHomeRegionResponse;

class GetHomeRegionResponsePrivate : public MigrationHubConfigResponsePrivate {

public:

    explicit GetHomeRegionResponsePrivate(GetHomeRegionResponse * const q);

    void parseGetHomeRegionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHomeRegionResponse)
    Q_DISABLE_COPY(GetHomeRegionResponsePrivate)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
