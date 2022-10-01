// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLREQUEST_H
#define QTAWS_GETCONTROLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetControlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetControlRequest : public AuditManagerRequest {

public:
    GetControlRequest(const GetControlRequest &other);
    GetControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
