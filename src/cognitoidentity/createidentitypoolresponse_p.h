// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPOOLRESPONSE_P_H
#define QTAWS_CREATEIDENTITYPOOLRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class CreateIdentityPoolResponse;

class CreateIdentityPoolResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit CreateIdentityPoolResponsePrivate(CreateIdentityPoolResponse * const q);

    void parseCreateIdentityPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIdentityPoolResponse)
    Q_DISABLE_COPY(CreateIdentityPoolResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
