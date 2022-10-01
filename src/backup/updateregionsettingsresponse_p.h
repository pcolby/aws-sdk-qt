// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGIONSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEREGIONSETTINGSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class UpdateRegionSettingsResponse;

class UpdateRegionSettingsResponsePrivate : public BackupResponsePrivate {

public:

    explicit UpdateRegionSettingsResponsePrivate(UpdateRegionSettingsResponse * const q);

    void parseUpdateRegionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRegionSettingsResponse)
    Q_DISABLE_COPY(UpdateRegionSettingsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
