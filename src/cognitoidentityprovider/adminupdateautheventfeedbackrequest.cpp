// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminupdateautheventfeedbackrequest.h"
#include "adminupdateautheventfeedbackrequest_p.h"
#include "adminupdateautheventfeedbackresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateAuthEventFeedbackRequest
 * \brief The AdminUpdateAuthEventFeedbackRequest class provides an interface for CognitoIdentityProvider AdminUpdateAuthEventFeedback requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminUpdateAuthEventFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
AdminUpdateAuthEventFeedbackRequest::AdminUpdateAuthEventFeedbackRequest(const AdminUpdateAuthEventFeedbackRequest &other)
    : CognitoIdentityProviderRequest(new AdminUpdateAuthEventFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminUpdateAuthEventFeedbackRequest object.
 */
AdminUpdateAuthEventFeedbackRequest::AdminUpdateAuthEventFeedbackRequest()
    : CognitoIdentityProviderRequest(new AdminUpdateAuthEventFeedbackRequestPrivate(CognitoIdentityProviderRequest::AdminUpdateAuthEventFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool AdminUpdateAuthEventFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminUpdateAuthEventFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminUpdateAuthEventFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new AdminUpdateAuthEventFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateAuthEventFeedbackRequestPrivate
 * \brief The AdminUpdateAuthEventFeedbackRequestPrivate class provides private implementation for AdminUpdateAuthEventFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateAuthEventFeedbackRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminUpdateAuthEventFeedbackRequestPrivate::AdminUpdateAuthEventFeedbackRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUpdateAuthEventFeedbackRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminUpdateAuthEventFeedbackRequest
 * class' copy constructor.
 */
AdminUpdateAuthEventFeedbackRequestPrivate::AdminUpdateAuthEventFeedbackRequestPrivate(
    const AdminUpdateAuthEventFeedbackRequestPrivate &other, AdminUpdateAuthEventFeedbackRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
