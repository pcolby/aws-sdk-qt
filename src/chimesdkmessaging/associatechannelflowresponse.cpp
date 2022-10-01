// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatechannelflowresponse.h"
#include "associatechannelflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::AssociateChannelFlowResponse
 * \brief The AssociateChannelFlowResponse class provides an interace for ChimeSdkMessaging AssociateChannelFlow responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::associateChannelFlow
 */

/*!
 * Constructs a AssociateChannelFlowResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateChannelFlowResponse::AssociateChannelFlowResponse(
        const AssociateChannelFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new AssociateChannelFlowResponsePrivate(this), parent)
{
    setRequest(new AssociateChannelFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateChannelFlowRequest * AssociateChannelFlowResponse::request() const
{
    Q_D(const AssociateChannelFlowResponse);
    return static_cast<const AssociateChannelFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging AssociateChannelFlow \a response.
 */
void AssociateChannelFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateChannelFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::AssociateChannelFlowResponsePrivate
 * \brief The AssociateChannelFlowResponsePrivate class provides private implementation for AssociateChannelFlowResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a AssociateChannelFlowResponsePrivate object with public implementation \a q.
 */
AssociateChannelFlowResponsePrivate::AssociateChannelFlowResponsePrivate(
    AssociateChannelFlowResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging AssociateChannelFlow response element from \a xml.
 */
void AssociateChannelFlowResponsePrivate::parseAssociateChannelFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateChannelFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
