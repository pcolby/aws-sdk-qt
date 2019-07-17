/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateautheventfeedbackrequest.h"
#include "updateautheventfeedbackrequest_p.h"
#include "updateautheventfeedbackresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateAuthEventFeedbackRequest
 * \brief The UpdateAuthEventFeedbackRequest class provides an interface for CognitoIdentityProvider UpdateAuthEventFeedback requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::updateAuthEventFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAuthEventFeedbackRequest::UpdateAuthEventFeedbackRequest(const UpdateAuthEventFeedbackRequest &other)
    : CognitoIdentityProviderRequest(new UpdateAuthEventFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAuthEventFeedbackRequest object.
 */
UpdateAuthEventFeedbackRequest::UpdateAuthEventFeedbackRequest()
    : CognitoIdentityProviderRequest(new UpdateAuthEventFeedbackRequestPrivate(CognitoIdentityProviderRequest::UpdateAuthEventFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAuthEventFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAuthEventFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAuthEventFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAuthEventFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateAuthEventFeedbackRequestPrivate
 * \brief The UpdateAuthEventFeedbackRequestPrivate class provides private implementation for UpdateAuthEventFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateAuthEventFeedbackRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateAuthEventFeedbackRequestPrivate::UpdateAuthEventFeedbackRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateAuthEventFeedbackRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAuthEventFeedbackRequest
 * class' copy constructor.
 */
UpdateAuthEventFeedbackRequestPrivate::UpdateAuthEventFeedbackRequestPrivate(
    const UpdateAuthEventFeedbackRequestPrivate &other, UpdateAuthEventFeedbackRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
