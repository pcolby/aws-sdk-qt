// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelflowresponse.h"
#include "updatechannelflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelFlowResponse
 * \brief The UpdateChannelFlowResponse class provides an interace for ChimeSdkMessaging UpdateChannelFlow responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::updateChannelFlow
 */

/*!
 * Constructs a UpdateChannelFlowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelFlowResponse::UpdateChannelFlowResponse(
        const UpdateChannelFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new UpdateChannelFlowResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelFlowRequest * UpdateChannelFlowResponse::request() const
{
    Q_D(const UpdateChannelFlowResponse);
    return static_cast<const UpdateChannelFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging UpdateChannelFlow \a response.
 */
void UpdateChannelFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelFlowResponsePrivate
 * \brief The UpdateChannelFlowResponsePrivate class provides private implementation for UpdateChannelFlowResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a UpdateChannelFlowResponsePrivate object with public implementation \a q.
 */
UpdateChannelFlowResponsePrivate::UpdateChannelFlowResponsePrivate(
    UpdateChannelFlowResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging UpdateChannelFlow response element from \a xml.
 */
void UpdateChannelFlowResponsePrivate::parseUpdateChannelFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
