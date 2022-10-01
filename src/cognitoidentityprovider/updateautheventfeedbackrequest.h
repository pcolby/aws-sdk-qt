// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHEVENTFEEDBACKREQUEST_H
#define QTAWS_UPDATEAUTHEVENTFEEDBACKREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateAuthEventFeedbackRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateAuthEventFeedbackRequest : public CognitoIdentityProviderRequest {

public:
    UpdateAuthEventFeedbackRequest(const UpdateAuthEventFeedbackRequest &other);
    UpdateAuthEventFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuthEventFeedbackRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
