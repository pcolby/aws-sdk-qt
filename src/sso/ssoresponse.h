// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSORESPONSE_H
#define QTAWS_SSORESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsssoglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Sso {

class SsoResponsePrivate;

class QTAWSSSO_EXPORT SsoResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SsoResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SsoResponse(SsoResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsoResponse)
    Q_DISABLE_COPY(SsoResponse)

};

} // namespace Sso
} // namespace QtAws

#endif
