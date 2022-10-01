// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESETTINGSRESPONSE_P_H
#define QTAWS_UPDATESETTINGSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateSettingsResponse;

class UpdateSettingsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateSettingsResponsePrivate(UpdateSettingsResponse * const q);

    void parseUpdateSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSettingsResponse)
    Q_DISABLE_COPY(UpdateSettingsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
