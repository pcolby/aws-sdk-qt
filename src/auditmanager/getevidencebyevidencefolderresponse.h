// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEBYEVIDENCEFOLDERRESPONSE_H
#define QTAWS_GETEVIDENCEBYEVIDENCEFOLDERRESPONSE_H

#include "auditmanagerresponse.h"
#include "getevidencebyevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceByEvidenceFolderResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceByEvidenceFolderResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetEvidenceByEvidenceFolderResponse(const GetEvidenceByEvidenceFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEvidenceByEvidenceFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceByEvidenceFolderResponse)
    Q_DISABLE_COPY(GetEvidenceByEvidenceFolderResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
