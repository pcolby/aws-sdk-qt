// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEFOLDERREQUEST_H
#define QTAWS_GETEVIDENCEFOLDERREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceFolderRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceFolderRequest : public AuditManagerRequest {

public:
    GetEvidenceFolderRequest(const GetEvidenceFolderRequest &other);
    GetEvidenceFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceFolderRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
