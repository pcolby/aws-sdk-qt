// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERACCOUNTRESPONSE_P_H
#define QTAWS_DEREGISTERACCOUNTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeregisterAccountResponse;

class DeregisterAccountResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeregisterAccountResponsePrivate(DeregisterAccountResponse * const q);

    void parseDeregisterAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterAccountResponse)
    Q_DISABLE_COPY(DeregisterAccountResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
