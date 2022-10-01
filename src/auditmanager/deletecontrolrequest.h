// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLREQUEST_H
#define QTAWS_DELETECONTROLREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteControlRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteControlRequest : public AuditManagerRequest {

public:
    DeleteControlRequest(const DeleteControlRequest &other);
    DeleteControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteControlRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
