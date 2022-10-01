/*
    Copyright 2013-2021 Paul Colby

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

#include "getchannelmembershippreferencesresponse.h"
#include "getchannelmembershippreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMembershipPreferencesResponse
 * \brief The GetChannelMembershipPreferencesResponse class provides an interace for ChimeSdkMessaging GetChannelMembershipPreferences responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getChannelMembershipPreferences
 */

/*!
 * Constructs a GetChannelMembershipPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelMembershipPreferencesResponse::GetChannelMembershipPreferencesResponse(
        const GetChannelMembershipPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new GetChannelMembershipPreferencesResponsePrivate(this), parent)
{
    setRequest(new GetChannelMembershipPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelMembershipPreferencesRequest * GetChannelMembershipPreferencesResponse::request() const
{
    Q_D(const GetChannelMembershipPreferencesResponse);
    return static_cast<const GetChannelMembershipPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging GetChannelMembershipPreferences \a response.
 */
void GetChannelMembershipPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelMembershipPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMembershipPreferencesResponsePrivate
 * \brief The GetChannelMembershipPreferencesResponsePrivate class provides private implementation for GetChannelMembershipPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetChannelMembershipPreferencesResponsePrivate object with public implementation \a q.
 */
GetChannelMembershipPreferencesResponsePrivate::GetChannelMembershipPreferencesResponsePrivate(
    GetChannelMembershipPreferencesResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging GetChannelMembershipPreferences response element from \a xml.
 */
void GetChannelMembershipPreferencesResponsePrivate::parseGetChannelMembershipPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelMembershipPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
