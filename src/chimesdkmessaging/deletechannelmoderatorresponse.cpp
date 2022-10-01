// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelmoderatorresponse.h"
#include "deletechannelmoderatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelModeratorResponse
 * \brief The DeleteChannelModeratorResponse class provides an interace for ChimeSdkMessaging DeleteChannelModerator responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::deleteChannelModerator
 */

/*!
 * Constructs a DeleteChannelModeratorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteChannelModeratorResponse::DeleteChannelModeratorResponse(
        const DeleteChannelModeratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DeleteChannelModeratorResponsePrivate(this), parent)
{
    setRequest(new DeleteChannelModeratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteChannelModeratorRequest * DeleteChannelModeratorResponse::request() const
{
    Q_D(const DeleteChannelModeratorResponse);
    return static_cast<const DeleteChannelModeratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DeleteChannelModerator \a response.
 */
void DeleteChannelModeratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteChannelModeratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelModeratorResponsePrivate
 * \brief The DeleteChannelModeratorResponsePrivate class provides private implementation for DeleteChannelModeratorResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DeleteChannelModeratorResponsePrivate object with public implementation \a q.
 */
DeleteChannelModeratorResponsePrivate::DeleteChannelModeratorResponsePrivate(
    DeleteChannelModeratorResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DeleteChannelModerator response element from \a xml.
 */
void DeleteChannelModeratorResponsePrivate::parseDeleteChannelModeratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChannelModeratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
