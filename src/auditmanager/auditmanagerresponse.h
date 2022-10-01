// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUDITMANAGERRESPONSE_H
#define QTAWS_AUDITMANAGERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsauditmanagerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AuditManager {

class AuditManagerResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT AuditManagerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AuditManagerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AuditManagerResponse(AuditManagerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuditManagerResponse)
    Q_DISABLE_COPY(AuditManagerResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
