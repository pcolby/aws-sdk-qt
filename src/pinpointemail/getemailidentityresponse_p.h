// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYRESPONSE_P_H
#define QTAWS_GETEMAILIDENTITYRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetEmailIdentityResponse;

class GetEmailIdentityResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetEmailIdentityResponsePrivate(GetEmailIdentityResponse * const q);

    void parseGetEmailIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEmailIdentityResponse)
    Q_DISABLE_COPY(GetEmailIdentityResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
