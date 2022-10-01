// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENRESPONSE_P_H
#define QTAWS_GETAUTHORIZATIONTOKENRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class GetAuthorizationTokenResponse;

class GetAuthorizationTokenResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit GetAuthorizationTokenResponsePrivate(GetAuthorizationTokenResponse * const q);

    void parseGetAuthorizationTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAuthorizationTokenResponse)
    Q_DISABLE_COPY(GetAuthorizationTokenResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
