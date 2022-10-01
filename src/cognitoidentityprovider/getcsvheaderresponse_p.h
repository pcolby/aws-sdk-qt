// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCSVHEADERRESPONSE_P_H
#define QTAWS_GETCSVHEADERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetCSVHeaderResponse;

class GetCSVHeaderResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit GetCSVHeaderResponsePrivate(GetCSVHeaderResponse * const q);

    void parseGetCSVHeaderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCSVHeaderResponse)
    Q_DISABLE_COPY(GetCSVHeaderResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
