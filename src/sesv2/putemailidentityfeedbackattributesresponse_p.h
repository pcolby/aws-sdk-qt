// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityFeedbackAttributesResponse;

class PutEmailIdentityFeedbackAttributesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutEmailIdentityFeedbackAttributesResponsePrivate(PutEmailIdentityFeedbackAttributesResponse * const q);

    void parsePutEmailIdentityFeedbackAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityFeedbackAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityFeedbackAttributesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
