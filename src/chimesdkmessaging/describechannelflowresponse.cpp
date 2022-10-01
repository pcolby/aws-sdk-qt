// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelflowresponse.h"
#include "describechannelflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelFlowResponse
 * \brief The DescribeChannelFlowResponse class provides an interace for ChimeSdkMessaging DescribeChannelFlow responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelFlow
 */

/*!
 * Constructs a DescribeChannelFlowResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelFlowResponse::DescribeChannelFlowResponse(
        const DescribeChannelFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelFlowResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelFlowRequest * DescribeChannelFlowResponse::request() const
{
    Q_D(const DescribeChannelFlowResponse);
    return static_cast<const DescribeChannelFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannelFlow \a response.
 */
void DescribeChannelFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelFlowResponsePrivate
 * \brief The DescribeChannelFlowResponsePrivate class provides private implementation for DescribeChannelFlowResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelFlowResponsePrivate object with public implementation \a q.
 */
DescribeChannelFlowResponsePrivate::DescribeChannelFlowResponsePrivate(
    DescribeChannelFlowResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannelFlow response element from \a xml.
 */
void DescribeChannelFlowResponsePrivate::parseDescribeChannelFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
