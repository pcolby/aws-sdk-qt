// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_COGNITOIDENTITYPROVIDERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderResponse;

class CognitoIdentityProviderResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CognitoIdentityProviderResponsePrivate(CognitoIdentityProviderResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityProviderResponse)
    Q_DISABLE_COPY(CognitoIdentityProviderResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
