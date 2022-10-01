// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKRESPONSE_H
#define QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminupdateautheventfeedbackrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateAuthEventFeedbackResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminUpdateAuthEventFeedbackResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminUpdateAuthEventFeedbackResponse(const AdminUpdateAuthEventFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminUpdateAuthEventFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminUpdateAuthEventFeedbackResponse)
    Q_DISABLE_COPY(AdminUpdateAuthEventFeedbackResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
