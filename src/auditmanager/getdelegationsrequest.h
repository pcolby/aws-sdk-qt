// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATIONSREQUEST_H
#define QTAWS_GETDELEGATIONSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetDelegationsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetDelegationsRequest : public AuditManagerRequest {

public:
    GetDelegationsRequest(const GetDelegationsRequest &other);
    GetDelegationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDelegationsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
