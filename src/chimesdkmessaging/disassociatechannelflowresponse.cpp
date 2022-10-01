// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatechannelflowresponse.h"
#include "disassociatechannelflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DisassociateChannelFlowResponse
 * \brief The DisassociateChannelFlowResponse class provides an interace for ChimeSdkMessaging DisassociateChannelFlow responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::disassociateChannelFlow
 */

/*!
 * Constructs a DisassociateChannelFlowResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateChannelFlowResponse::DisassociateChannelFlowResponse(
        const DisassociateChannelFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DisassociateChannelFlowResponsePrivate(this), parent)
{
    setRequest(new DisassociateChannelFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateChannelFlowRequest * DisassociateChannelFlowResponse::request() const
{
    Q_D(const DisassociateChannelFlowResponse);
    return static_cast<const DisassociateChannelFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DisassociateChannelFlow \a response.
 */
void DisassociateChannelFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateChannelFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DisassociateChannelFlowResponsePrivate
 * \brief The DisassociateChannelFlowResponsePrivate class provides private implementation for DisassociateChannelFlowResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DisassociateChannelFlowResponsePrivate object with public implementation \a q.
 */
DisassociateChannelFlowResponsePrivate::DisassociateChannelFlowResponsePrivate(
    DisassociateChannelFlowResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DisassociateChannelFlow response element from \a xml.
 */
void DisassociateChannelFlowResponsePrivate::parseDisassociateChannelFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateChannelFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
