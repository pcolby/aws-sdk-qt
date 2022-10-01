// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityFeedbackAttributesResponse;

class PutEmailIdentityFeedbackAttributesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutEmailIdentityFeedbackAttributesResponsePrivate(PutEmailIdentityFeedbackAttributesResponse * const q);

    void parsePutEmailIdentityFeedbackAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityFeedbackAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityFeedbackAttributesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
