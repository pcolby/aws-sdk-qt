// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLINKDEVELOPERIDENTITYRESPONSE_P_H
#define QTAWS_UNLINKDEVELOPERIDENTITYRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class UnlinkDeveloperIdentityResponse;

class UnlinkDeveloperIdentityResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit UnlinkDeveloperIdentityResponsePrivate(UnlinkDeveloperIdentityResponse * const q);

    void parseUnlinkDeveloperIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnlinkDeveloperIdentityResponse)
    Q_DISABLE_COPY(UnlinkDeveloperIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
