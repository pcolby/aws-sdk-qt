// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLINKIDENTITYRESPONSE_P_H
#define QTAWS_UNLINKIDENTITYRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class UnlinkIdentityResponse;

class UnlinkIdentityResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit UnlinkIdentityResponsePrivate(UnlinkIdentityResponse * const q);

    void parseUnlinkIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnlinkIdentityResponse)
    Q_DISABLE_COPY(UnlinkIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
