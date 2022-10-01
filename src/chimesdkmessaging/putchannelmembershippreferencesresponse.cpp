// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putchannelmembershippreferencesresponse.h"
#include "putchannelmembershippreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::PutChannelMembershipPreferencesResponse
 * \brief The PutChannelMembershipPreferencesResponse class provides an interace for ChimeSdkMessaging PutChannelMembershipPreferences responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::putChannelMembershipPreferences
 */

/*!
 * Constructs a PutChannelMembershipPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
PutChannelMembershipPreferencesResponse::PutChannelMembershipPreferencesResponse(
        const PutChannelMembershipPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new PutChannelMembershipPreferencesResponsePrivate(this), parent)
{
    setRequest(new PutChannelMembershipPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutChannelMembershipPreferencesRequest * PutChannelMembershipPreferencesResponse::request() const
{
    Q_D(const PutChannelMembershipPreferencesResponse);
    return static_cast<const PutChannelMembershipPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging PutChannelMembershipPreferences \a response.
 */
void PutChannelMembershipPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutChannelMembershipPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::PutChannelMembershipPreferencesResponsePrivate
 * \brief The PutChannelMembershipPreferencesResponsePrivate class provides private implementation for PutChannelMembershipPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a PutChannelMembershipPreferencesResponsePrivate object with public implementation \a q.
 */
PutChannelMembershipPreferencesResponsePrivate::PutChannelMembershipPreferencesResponsePrivate(
    PutChannelMembershipPreferencesResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging PutChannelMembershipPreferences response element from \a xml.
 */
void PutChannelMembershipPreferencesResponsePrivate::parsePutChannelMembershipPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutChannelMembershipPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
