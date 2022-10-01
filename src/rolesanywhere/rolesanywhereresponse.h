// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLESANYWHERERESPONSE_H
#define QTAWS_ROLESANYWHERERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsrolesanywhereglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace RolesAnywhere {

class RolesAnywhereResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT RolesAnywhereResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RolesAnywhereResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RolesAnywhereResponse(RolesAnywhereResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RolesAnywhereResponse)
    Q_DISABLE_COPY(RolesAnywhereResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
