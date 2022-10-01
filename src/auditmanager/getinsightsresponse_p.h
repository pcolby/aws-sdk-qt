// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSRESPONSE_P_H
#define QTAWS_GETINSIGHTSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetInsightsResponse;

class GetInsightsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetInsightsResponsePrivate(GetInsightsResponse * const q);

    void parseGetInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightsResponse)
    Q_DISABLE_COPY(GetInsightsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
