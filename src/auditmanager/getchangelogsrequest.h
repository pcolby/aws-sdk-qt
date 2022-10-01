// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGELOGSREQUEST_H
#define QTAWS_GETCHANGELOGSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetChangeLogsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetChangeLogsRequest : public AuditManagerRequest {

public:
    GetChangeLogsRequest(const GetChangeLogsRequest &other);
    GetChangeLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeLogsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
