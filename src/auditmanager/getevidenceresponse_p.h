// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCERESPONSE_P_H
#define QTAWS_GETEVIDENCERESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceResponse;

class GetEvidenceResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetEvidenceResponsePrivate(GetEvidenceResponse * const q);

    void parseGetEvidenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEvidenceResponse)
    Q_DISABLE_COPY(GetEvidenceResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
