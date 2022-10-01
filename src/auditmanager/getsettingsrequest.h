// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSETTINGSREQUEST_H
#define QTAWS_GETSETTINGSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetSettingsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetSettingsRequest : public AuditManagerRequest {

public:
    GetSettingsRequest(const GetSettingsRequest &other);
    GetSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSettingsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
