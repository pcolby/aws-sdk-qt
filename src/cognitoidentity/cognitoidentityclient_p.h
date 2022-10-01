// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYCLIENT_P_H
#define QTAWS_COGNITOIDENTITYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityClient;

class CognitoIdentityClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CognitoIdentityClientPrivate(CognitoIdentityClient * const q);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityClient)
    Q_DISABLE_COPY(CognitoIdentityClientPrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
