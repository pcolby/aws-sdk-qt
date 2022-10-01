// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSFORIDENTITYRESPONSE_P_H
#define QTAWS_GETCREDENTIALSFORIDENTITYRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class GetCredentialsForIdentityResponse;

class GetCredentialsForIdentityResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit GetCredentialsForIdentityResponsePrivate(GetCredentialsForIdentityResponse * const q);

    void parseGetCredentialsForIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCredentialsForIdentityResponse)
    Q_DISABLE_COPY(GetCredentialsForIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
