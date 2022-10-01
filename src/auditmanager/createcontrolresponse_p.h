// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLRESPONSE_P_H
#define QTAWS_CREATECONTROLRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class CreateControlResponse;

class CreateControlResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit CreateControlResponsePrivate(CreateControlResponse * const q);

    void parseCreateControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateControlResponse)
    Q_DISABLE_COPY(CreateControlResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
