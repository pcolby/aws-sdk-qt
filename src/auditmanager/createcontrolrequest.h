// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLREQUEST_H
#define QTAWS_CREATECONTROLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateControlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT CreateControlRequest : public AuditManagerRequest {

public:
    CreateControlRequest(const CreateControlRequest &other);
    CreateControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
