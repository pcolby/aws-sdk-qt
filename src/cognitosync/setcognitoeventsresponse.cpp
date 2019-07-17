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

#include "setcognitoeventsresponse.h"
#include "setcognitoeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::SetCognitoEventsResponse
 * \brief The SetCognitoEventsResponse class provides an interace for CognitoSync SetCognitoEvents responses.
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
 * \sa CognitoSyncClient::setCognitoEvents
 */

/*!
 * Constructs a SetCognitoEventsResponse object for \a reply to \a request, with parent \a parent.
 */
SetCognitoEventsResponse::SetCognitoEventsResponse(
        const SetCognitoEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new SetCognitoEventsResponsePrivate(this), parent)
{
    setRequest(new SetCognitoEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetCognitoEventsRequest * SetCognitoEventsResponse::request() const
{
    Q_D(const SetCognitoEventsResponse);
    return static_cast<const SetCognitoEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoSync SetCognitoEvents \a response.
 */
void SetCognitoEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetCognitoEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoSync::SetCognitoEventsResponsePrivate
 * \brief The SetCognitoEventsResponsePrivate class provides private implementation for SetCognitoEventsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a SetCognitoEventsResponsePrivate object with public implementation \a q.
 */
SetCognitoEventsResponsePrivate::SetCognitoEventsResponsePrivate(
    SetCognitoEventsResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/*!
 * Parses a CognitoSync SetCognitoEvents response element from \a xml.
 */
void SetCognitoEventsResponsePrivate::parseSetCognitoEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetCognitoEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoSync
} // namespace QtAws
