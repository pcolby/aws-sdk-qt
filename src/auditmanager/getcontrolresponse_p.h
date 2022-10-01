// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLRESPONSE_P_H
#define QTAWS_GETCONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetControlResponse;

class GetControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetControlResponsePrivate(GetControlResponse * const q);

    void parseGetControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetControlResponse)
    Q_DISABLE_COPY(GetControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
