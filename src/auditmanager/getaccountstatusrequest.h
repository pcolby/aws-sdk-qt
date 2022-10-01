// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSTATUSREQUEST_H
#define QTAWS_GETACCOUNTSTATUSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetAccountStatusRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetAccountStatusRequest : public AuditManagerRequest {

public:
    GetAccountStatusRequest(const GetAccountStatusRequest &other);
    GetAccountStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountStatusRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
