// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEBYEVIDENCEFOLDERRESPONSE_P_H
#define QTAWS_GETEVIDENCEBYEVIDENCEFOLDERRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceByEvidenceFolderResponse;

class GetEvidenceByEvidenceFolderResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetEvidenceByEvidenceFolderResponsePrivate(GetEvidenceByEvidenceFolderResponse * const q);

    void parseGetEvidenceByEvidenceFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEvidenceByEvidenceFolderResponse)
    Q_DISABLE_COPY(GetEvidenceByEvidenceFolderResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
