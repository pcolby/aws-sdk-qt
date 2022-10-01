// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelbanresponse.h"
#include "createchannelbanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelBanResponse
 * \brief The CreateChannelBanResponse class provides an interace for ChimeSdkMessaging CreateChannelBan responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannelBan
 */

/*!
 * Constructs a CreateChannelBanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChannelBanResponse::CreateChannelBanResponse(
        const CreateChannelBanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new CreateChannelBanResponsePrivate(this), parent)
{
    setRequest(new CreateChannelBanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChannelBanRequest * CreateChannelBanResponse::request() const
{
    Q_D(const CreateChannelBanResponse);
    return static_cast<const CreateChannelBanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging CreateChannelBan \a response.
 */
void CreateChannelBanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChannelBanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelBanResponsePrivate
 * \brief The CreateChannelBanResponsePrivate class provides private implementation for CreateChannelBanResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelBanResponsePrivate object with public implementation \a q.
 */
CreateChannelBanResponsePrivate::CreateChannelBanResponsePrivate(
    CreateChannelBanResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging CreateChannelBan response element from \a xml.
 */
void CreateChannelBanResponsePrivate::parseCreateChannelBanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelBanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
