// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTROLRESPONSE_P_H
#define QTAWS_UPDATECONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class UpdateControlResponse;

class UpdateControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit UpdateControlResponsePrivate(UpdateControlResponse * const q);

    void parseUpdateControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateControlResponse)
    Q_DISABLE_COPY(UpdateControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
