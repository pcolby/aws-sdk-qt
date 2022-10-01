// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEBYEVIDENCEFOLDERREQUEST_H
#define QTAWS_GETEVIDENCEBYEVIDENCEFOLDERREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceByEvidenceFolderRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceByEvidenceFolderRequest : public AuditManagerRequest {

public:
    GetEvidenceByEvidenceFolderRequest(const GetEvidenceByEvidenceFolderRequest &other);
    GetEvidenceByEvidenceFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceByEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
