// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUDITMANAGERCLIENT_P_H
#define QTAWS_AUDITMANAGERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AuditManager {

class AuditManagerClient;

class AuditManagerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AuditManagerClientPrivate(AuditManagerClient * const q);

private:
    Q_DECLARE_PUBLIC(AuditManagerClient)
    Q_DISABLE_COPY(AuditManagerClientPrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
