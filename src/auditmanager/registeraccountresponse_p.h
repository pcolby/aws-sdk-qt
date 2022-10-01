// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACCOUNTRESPONSE_P_H
#define QTAWS_REGISTERACCOUNTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class RegisterAccountResponse;

class RegisterAccountResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit RegisterAccountResponsePrivate(RegisterAccountResponse * const q);

    void parseRegisterAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterAccountResponse)
    Q_DISABLE_COPY(RegisterAccountResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
