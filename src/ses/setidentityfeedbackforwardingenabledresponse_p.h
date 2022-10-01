// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDRESPONSE_P_H
#define QTAWS_SETIDENTITYFEEDBACKFORWARDINGENABLEDRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetIdentityFeedbackForwardingEnabledResponse;

class SetIdentityFeedbackForwardingEnabledResponsePrivate : public SesResponsePrivate {

public:

    explicit SetIdentityFeedbackForwardingEnabledResponsePrivate(SetIdentityFeedbackForwardingEnabledResponse * const q);

    void parseSetIdentityFeedbackForwardingEnabledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityFeedbackForwardingEnabledResponse)
    Q_DISABLE_COPY(SetIdentityFeedbackForwardingEnabledResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
