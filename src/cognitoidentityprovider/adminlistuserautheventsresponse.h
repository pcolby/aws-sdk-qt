// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTUSERAUTHEVENTSRESPONSE_H
#define QTAWS_ADMINLISTUSERAUTHEVENTSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminlistuserautheventsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListUserAuthEventsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminListUserAuthEventsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminListUserAuthEventsResponse(const AdminListUserAuthEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminListUserAuthEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminListUserAuthEventsResponse)
    Q_DISABLE_COPY(AdminListUserAuthEventsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
