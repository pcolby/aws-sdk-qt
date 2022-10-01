// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPDEVELOPERIDENTITYRESPONSE_P_H
#define QTAWS_LOOKUPDEVELOPERIDENTITYRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class LookupDeveloperIdentityResponse;

class LookupDeveloperIdentityResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit LookupDeveloperIdentityResponsePrivate(LookupDeveloperIdentityResponse * const q);

    void parseLookupDeveloperIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LookupDeveloperIdentityResponse)
    Q_DISABLE_COPY(LookupDeveloperIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
