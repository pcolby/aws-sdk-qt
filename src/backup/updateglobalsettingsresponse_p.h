// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEGLOBALSETTINGSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class UpdateGlobalSettingsResponse;

class UpdateGlobalSettingsResponsePrivate : public BackupResponsePrivate {

public:

    explicit UpdateGlobalSettingsResponsePrivate(UpdateGlobalSettingsResponse * const q);

    void parseUpdateGlobalSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalSettingsResponse)
    Q_DISABLE_COPY(UpdateGlobalSettingsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
