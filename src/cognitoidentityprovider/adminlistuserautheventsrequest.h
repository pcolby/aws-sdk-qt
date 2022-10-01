// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTUSERAUTHEVENTSREQUEST_H
#define QTAWS_ADMINLISTUSERAUTHEVENTSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListUserAuthEventsRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminListUserAuthEventsRequest : public CognitoIdentityProviderRequest {

public:
    AdminListUserAuthEventsRequest(const AdminListUserAuthEventsRequest &other);
    AdminListUserAuthEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminListUserAuthEventsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
