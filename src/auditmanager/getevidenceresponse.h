// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCERESPONSE_H
#define QTAWS_GETEVIDENCERESPONSE_H

#include "auditmanagerresponse.h"
#include "getevidencerequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetEvidenceResponse(const GetEvidenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEvidenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceResponse)
    Q_DISABLE_COPY(GetEvidenceResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
