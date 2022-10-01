// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGELOGSRESPONSE_P_H
#define QTAWS_GETCHANGELOGSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetChangeLogsResponse;

class GetChangeLogsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetChangeLogsResponsePrivate(GetChangeLogsResponse * const q);

    void parseGetChangeLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChangeLogsResponse)
    Q_DISABLE_COPY(GetChangeLogsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
