// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSREQUEST_H
#define QTAWS_GETINSIGHTSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class GetInsightsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT GetInsightsRequest : public AuditManagerRequest {

public:
    GetInsightsRequest(const GetInsightsRequest &other);
    GetInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
