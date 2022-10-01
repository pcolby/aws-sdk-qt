// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUDITMANAGERREQUEST_P_H
#define QTAWS_AUDITMANAGERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class AuditManagerRequest;

class AuditManagerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AuditManagerRequest::Action action; ///< AuditManager action to be performed.
    QString apiVersion;        ///< AuditManager API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AuditManager request (query string) parameters. @todo?

    AuditManagerRequestPrivate(const AuditManagerRequest::Action action, AuditManagerRequest * const q);
    AuditManagerRequestPrivate(const AuditManagerRequestPrivate &other, AuditManagerRequest * const q);

    static QString toString(const AuditManagerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AuditManagerRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
