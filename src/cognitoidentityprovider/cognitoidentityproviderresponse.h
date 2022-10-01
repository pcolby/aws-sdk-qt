// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYPROVIDERRESPONSE_H
#define QTAWS_COGNITOIDENTITYPROVIDERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscognitoidentityproviderglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CognitoIdentityProviderResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CognitoIdentityProviderResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CognitoIdentityProviderResponse(CognitoIdentityProviderResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CognitoIdentityProviderResponse)
    Q_DISABLE_COPY(CognitoIdentityProviderResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
