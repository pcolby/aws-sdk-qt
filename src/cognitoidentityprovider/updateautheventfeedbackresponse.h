// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHEVENTFEEDBACKRESPONSE_H
#define QTAWS_UPDATEAUTHEVENTFEEDBACKRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updateautheventfeedbackrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateAuthEventFeedbackResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateAuthEventFeedbackResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateAuthEventFeedbackResponse(const UpdateAuthEventFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAuthEventFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuthEventFeedbackResponse)
    Q_DISABLE_COPY(UpdateAuthEventFeedbackResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
