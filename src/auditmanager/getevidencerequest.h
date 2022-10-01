// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVIDENCEREQUEST_H
#define QTAWS_GETEVIDENCEREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetEvidenceRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetEvidenceRequest : public AuditManagerRequest {

public:
    GetEvidenceRequest(const GetEvidenceRequest &other);
    GetEvidenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvidenceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
