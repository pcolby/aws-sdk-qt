// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSETTINGSRESPONSE_P_H
#define QTAWS_GETSETTINGSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetSettingsResponse;

class GetSettingsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetSettingsResponsePrivate(GetSettingsResponse * const q);

    void parseGetSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSettingsResponse)
    Q_DISABLE_COPY(GetSettingsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
