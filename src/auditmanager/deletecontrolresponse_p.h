// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLRESPONSE_P_H
#define QTAWS_DELETECONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeleteControlResponse;

class DeleteControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeleteControlResponsePrivate(DeleteControlResponse * const q);

    void parseDeleteControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteControlResponse)
    Q_DISABLE_COPY(DeleteControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
