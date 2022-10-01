// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERACCOUNTREQUEST_H
#define QTAWS_DEREGISTERACCOUNTREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeregisterAccountRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeregisterAccountRequest : public AuditManagerRequest {

public:
    DeregisterAccountRequest(const DeregisterAccountRequest &other);
    DeregisterAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
