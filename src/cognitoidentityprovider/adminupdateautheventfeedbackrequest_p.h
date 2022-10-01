// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKREQUEST_P_H
#define QTAWS_ADMINUPDATEAUTHEVENTFEEDBACKREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminupdateautheventfeedbackrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateAuthEventFeedbackRequest;

class AdminUpdateAuthEventFeedbackRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminUpdateAuthEventFeedbackRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminUpdateAuthEventFeedbackRequest * const q);
    AdminUpdateAuthEventFeedbackRequestPrivate(const AdminUpdateAuthEventFeedbackRequestPrivate &other,
                                   AdminUpdateAuthEventFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminUpdateAuthEventFeedbackRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
