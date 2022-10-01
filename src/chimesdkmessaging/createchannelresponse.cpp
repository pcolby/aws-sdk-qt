// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelresponse.h"
#include "createchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelResponse
 * \brief The CreateChannelResponse class provides an interace for ChimeSdkMessaging CreateChannel responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannel
 */

/*!
 * Constructs a CreateChannelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChannelResponse::CreateChannelResponse(
        const CreateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new CreateChannelResponsePrivate(this), parent)
{
    setRequest(new CreateChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChannelRequest * CreateChannelResponse::request() const
{
    Q_D(const CreateChannelResponse);
    return static_cast<const CreateChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging CreateChannel \a response.
 */
void CreateChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelResponsePrivate
 * \brief The CreateChannelResponsePrivate class provides private implementation for CreateChannelResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelResponsePrivate object with public implementation \a q.
 */
CreateChannelResponsePrivate::CreateChannelResponsePrivate(
    CreateChannelResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging CreateChannel response element from \a xml.
 */
void CreateChannelResponsePrivate::parseCreateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
