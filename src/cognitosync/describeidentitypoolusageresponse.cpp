/*
    Copyright 2013-2018 Paul Colby

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

#include "describeidentitypoolusageresponse.h"
#include "describeidentitypoolusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::DescribeIdentityPoolUsageResponse
 * \brief The DescribeIdentityPoolUsageResponse class provides an interace for CognitoSync DescribeIdentityPoolUsage responses.
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
 * \sa CognitoSyncClient::describeIdentityPoolUsage
 */

/*!
 * Constructs a DescribeIdentityPoolUsageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIdentityPoolUsageResponse::DescribeIdentityPoolUsageResponse(
        const DescribeIdentityPoolUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new DescribeIdentityPoolUsageResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityPoolUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIdentityPoolUsageRequest * DescribeIdentityPoolUsageResponse::request() const
{
    Q_D(const DescribeIdentityPoolUsageResponse);
    return static_cast<const DescribeIdentityPoolUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoSync DescribeIdentityPoolUsage \a response.
 */
void DescribeIdentityPoolUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIdentityPoolUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoSync::DescribeIdentityPoolUsageResponsePrivate
 * \brief The DescribeIdentityPoolUsageResponsePrivate class provides private implementation for DescribeIdentityPoolUsageResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a DescribeIdentityPoolUsageResponsePrivate object with public implementation \a q.
 */
DescribeIdentityPoolUsageResponsePrivate::DescribeIdentityPoolUsageResponsePrivate(
    DescribeIdentityPoolUsageResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/*!
 * Parses a CognitoSync DescribeIdentityPoolUsage response element from \a xml.
 */
void DescribeIdentityPoolUsageResponsePrivate::parseDescribeIdentityPoolUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityPoolUsageResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
