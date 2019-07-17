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

#include "getidentitypoolconfigurationrequest.h"
#include "getidentitypoolconfigurationrequest_p.h"
#include "getidentitypoolconfigurationresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::GetIdentityPoolConfigurationRequest
 * \brief The GetIdentityPoolConfigurationRequest class provides an interface for CognitoSync GetIdentityPoolConfiguration requests.
 *
 * \inmodule QtAwsCognitoSync
 *
 *  <fullname>Amazon Cognito Sync</fullname>
 * 
 *  Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related
 *  user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist
 *  data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the
 *  mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User
 *  data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user
 * 
 *  identity>
 * 
 *  With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity.
 *  In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a
 *  href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity
 * 
 *  service</a>>
 * 
 *  If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS
 *  Mobile SDK. To learn more, see the <a
 *  href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a>
 *  and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for
 *
 * \sa CognitoSyncClient::getIdentityPoolConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityPoolConfigurationRequest::GetIdentityPoolConfigurationRequest(const GetIdentityPoolConfigurationRequest &other)
    : CognitoSyncRequest(new GetIdentityPoolConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityPoolConfigurationRequest object.
 */
GetIdentityPoolConfigurationRequest::GetIdentityPoolConfigurationRequest()
    : CognitoSyncRequest(new GetIdentityPoolConfigurationRequestPrivate(CognitoSyncRequest::GetIdentityPoolConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityPoolConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityPoolConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityPoolConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityPoolConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoSync::GetIdentityPoolConfigurationRequestPrivate
 * \brief The GetIdentityPoolConfigurationRequestPrivate class provides private implementation for GetIdentityPoolConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a GetIdentityPoolConfigurationRequestPrivate object for CognitoSync \a action,
 * with public implementation \a q.
 */
GetIdentityPoolConfigurationRequestPrivate::GetIdentityPoolConfigurationRequestPrivate(
    const CognitoSyncRequest::Action action, GetIdentityPoolConfigurationRequest * const q)
    : CognitoSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityPoolConfigurationRequest
 * class' copy constructor.
 */
GetIdentityPoolConfigurationRequestPrivate::GetIdentityPoolConfigurationRequestPrivate(
    const GetIdentityPoolConfigurationRequestPrivate &other, GetIdentityPoolConfigurationRequest * const q)
    : CognitoSyncRequestPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
