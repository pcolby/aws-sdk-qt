// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEDERATIONTOKENRESPONSE_P_H
#define QTAWS_GETFEDERATIONTOKENRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class GetFederationTokenResponse;

class GetFederationTokenResponsePrivate : public ConnectResponsePrivate {

public:

    explicit GetFederationTokenResponsePrivate(GetFederationTokenResponse * const q);

    void parseGetFederationTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFederationTokenResponse)
    Q_DISABLE_COPY(GetFederationTokenResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
