// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHEVENTFEEDBACKRESPONSE_P_H
#define QTAWS_UPDATEAUTHEVENTFEEDBACKRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateAuthEventFeedbackResponse;

class UpdateAuthEventFeedbackResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit UpdateAuthEventFeedbackResponsePrivate(UpdateAuthEventFeedbackResponse * const q);

    void parseUpdateAuthEventFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAuthEventFeedbackResponse)
    Q_DISABLE_COPY(UpdateAuthEventFeedbackResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
