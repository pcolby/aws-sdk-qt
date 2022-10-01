// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKRESPONSE_P_H
#define QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateAuthEventFeedbackResponse;

class AdminUpdateAuthEventFeedbackResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AdminUpdateAuthEventFeedbackResponsePrivate(AdminUpdateAuthEventFeedbackResponse * const q);

    void parseAdminUpdateAuthEventFeedbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AdminUpdateAuthEventFeedbackResponse)
    Q_DISABLE_COPY(AdminUpdateAuthEventFeedbackResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
