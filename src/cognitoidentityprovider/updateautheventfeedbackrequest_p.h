// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHEVENTFEEDBACKREQUEST_P_H
#define QTAWS_UPDATEAUTHEVENTFEEDBACKREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updateautheventfeedbackrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateAuthEventFeedbackRequest;

class UpdateAuthEventFeedbackRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateAuthEventFeedbackRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateAuthEventFeedbackRequest * const q);
    UpdateAuthEventFeedbackRequestPrivate(const UpdateAuthEventFeedbackRequestPrivate &other,
                                   UpdateAuthEventFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAuthEventFeedbackRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
