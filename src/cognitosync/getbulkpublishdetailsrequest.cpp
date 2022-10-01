// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbulkpublishdetailsrequest.h"
#include "getbulkpublishdetailsrequest_p.h"
#include "getbulkpublishdetailsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::GetBulkPublishDetailsRequest
 * \brief The GetBulkPublishDetailsRequest class provides an interface for CognitoSync GetBulkPublishDetails requests.
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
 * \sa CognitoSyncClient::getBulkPublishDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetBulkPublishDetailsRequest::GetBulkPublishDetailsRequest(const GetBulkPublishDetailsRequest &other)
    : CognitoSyncRequest(new GetBulkPublishDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBulkPublishDetailsRequest object.
 */
GetBulkPublishDetailsRequest::GetBulkPublishDetailsRequest()
    : CognitoSyncRequest(new GetBulkPublishDetailsRequestPrivate(CognitoSyncRequest::GetBulkPublishDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBulkPublishDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBulkPublishDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBulkPublishDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetBulkPublishDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoSync::GetBulkPublishDetailsRequestPrivate
 * \brief The GetBulkPublishDetailsRequestPrivate class provides private implementation for GetBulkPublishDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a GetBulkPublishDetailsRequestPrivate object for CognitoSync \a action,
 * with public implementation \a q.
 */
GetBulkPublishDetailsRequestPrivate::GetBulkPublishDetailsRequestPrivate(
    const CognitoSyncRequest::Action action, GetBulkPublishDetailsRequest * const q)
    : CognitoSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBulkPublishDetailsRequest
 * class' copy constructor.
 */
GetBulkPublishDetailsRequestPrivate::GetBulkPublishDetailsRequestPrivate(
    const GetBulkPublishDetailsRequestPrivate &other, GetBulkPublishDetailsRequest * const q)
    : CognitoSyncRequestPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
