// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERRESPONSE_H
#define QTAWS_GETEVIDENCEFOLDERRESPONSE_H

#include "auditmanagerresponse.h"
#include "getevidencefolderrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFolderResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceFolderResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetEvidenceFolderResponse(const GetEvidenceFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEvidenceFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceFolderResponse)
    Q_DISABLE_COPY(GetEvidenceFolderResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
