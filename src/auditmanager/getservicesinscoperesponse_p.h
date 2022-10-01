// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESINSCOPERESPONSE_P_H
#define QTAWS_GETSERVICESINSCOPERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetServicesInScopeResponse;

class GetServicesInScopeResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetServicesInScopeResponsePrivate(GetServicesInScopeResponse * const q);

    void parseGetServicesInScopeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServicesInScopeResponse)
    Q_DISABLE_COPY(GetServicesInScopeResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
