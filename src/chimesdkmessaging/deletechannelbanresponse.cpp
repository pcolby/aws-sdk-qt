// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelbanresponse.h"
#include "deletechannelbanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelBanResponse
 * \brief The DeleteChannelBanResponse class provides an interace for ChimeSdkMessaging DeleteChannelBan responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::deleteChannelBan
 */

/*!
 * Constructs a DeleteChannelBanResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteChannelBanResponse::DeleteChannelBanResponse(
        const DeleteChannelBanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DeleteChannelBanResponsePrivate(this), parent)
{
    setRequest(new DeleteChannelBanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteChannelBanRequest * DeleteChannelBanResponse::request() const
{
    Q_D(const DeleteChannelBanResponse);
    return static_cast<const DeleteChannelBanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DeleteChannelBan \a response.
 */
void DeleteChannelBanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteChannelBanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelBanResponsePrivate
 * \brief The DeleteChannelBanResponsePrivate class provides private implementation for DeleteChannelBanResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DeleteChannelBanResponsePrivate object with public implementation \a q.
 */
DeleteChannelBanResponsePrivate::DeleteChannelBanResponsePrivate(
    DeleteChannelBanResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DeleteChannelBan response element from \a xml.
 */
void DeleteChannelBanResponsePrivate::parseDeleteChannelBanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChannelBanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
