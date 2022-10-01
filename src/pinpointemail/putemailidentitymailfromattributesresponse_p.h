// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityMailFromAttributesResponse;

class PutEmailIdentityMailFromAttributesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutEmailIdentityMailFromAttributesResponsePrivate(PutEmailIdentityMailFromAttributesResponse * const q);

    void parsePutEmailIdentityMailFromAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityMailFromAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityMailFromAttributesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
