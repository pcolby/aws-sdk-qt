// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSTATUSRESPONSE_P_H
#define QTAWS_GETACCOUNTSTATUSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetAccountStatusResponse;

class GetAccountStatusResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetAccountStatusResponsePrivate(GetAccountStatusResponse * const q);

    void parseGetAccountStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountStatusResponse)
    Q_DISABLE_COPY(GetAccountStatusResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
