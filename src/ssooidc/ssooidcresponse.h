// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOOIDCRESPONSE_H
#define QTAWS_SSOOIDCRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsssooidcglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SsoOidc {

class SsoOidcResponsePrivate;

class QTAWSSSOOIDC_EXPORT SsoOidcResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SsoOidcResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SsoOidcResponse(SsoOidcResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsoOidcResponse)
    Q_DISABLE_COPY(SsoOidcResponse)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
