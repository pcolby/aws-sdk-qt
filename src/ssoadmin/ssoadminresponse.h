// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOADMINRESPONSE_H
#define QTAWS_SSOADMINRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsssoadminglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SsoAdmin {

class SsoAdminResponsePrivate;

class QTAWSSSOADMIN_EXPORT SsoAdminResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SsoAdminResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SsoAdminResponse(SsoAdminResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsoAdminResponse)
    Q_DISABLE_COPY(SsoAdminResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
