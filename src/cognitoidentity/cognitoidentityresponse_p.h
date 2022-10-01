// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYRESPONSE_P_H
#define QTAWS_COGNITOIDENTITYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityResponse;

class CognitoIdentityResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CognitoIdentityResponsePrivate(CognitoIdentityResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityResponse)
    Q_DISABLE_COPY(CognitoIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
