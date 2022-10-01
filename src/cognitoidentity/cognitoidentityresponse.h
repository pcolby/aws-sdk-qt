// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYRESPONSE_H
#define QTAWS_COGNITOIDENTITYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscognitoidentityglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT CognitoIdentityResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CognitoIdentityResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CognitoIdentityResponse(CognitoIdentityResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CognitoIdentityResponse)
    Q_DISABLE_COPY(CognitoIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
