// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPOOLRESPONSE_P_H
#define QTAWS_UPDATEIDENTITYPOOLRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class UpdateIdentityPoolResponse;

class UpdateIdentityPoolResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit UpdateIdentityPoolResponsePrivate(UpdateIdentityPoolResponse * const q);

    void parseUpdateIdentityPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIdentityPoolResponse)
    Q_DISABLE_COPY(UpdateIdentityPoolResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
