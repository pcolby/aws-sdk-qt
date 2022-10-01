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
