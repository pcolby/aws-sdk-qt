// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERRESPONSE_P_H
#define QTAWS_GETEVIDENCEFOLDERRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFolderResponse;

class GetEvidenceFolderResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetEvidenceFolderResponsePrivate(GetEvidenceFolderResponse * const q);

    void parseGetEvidenceFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEvidenceFolderResponse)
    Q_DISABLE_COPY(GetEvidenceFolderResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
