// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLSRESPONSE_P_H
#define QTAWS_LISTIDENTITYPOOLSRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentityPoolsResponse;

class ListIdentityPoolsResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit ListIdentityPoolsResponsePrivate(ListIdentityPoolsResponse * const q);

    void parseListIdentityPoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoolsResponse)
    Q_DISABLE_COPY(ListIdentityPoolsResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
