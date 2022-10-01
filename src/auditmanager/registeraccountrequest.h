// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACCOUNTREQUEST_H
#define QTAWS_REGISTERACCOUNTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class RegisterAccountRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT RegisterAccountRequest : public AuditManagerRequest {

public:
    RegisterAccountRequest(const RegisterAccountRequest &other);
    RegisterAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
