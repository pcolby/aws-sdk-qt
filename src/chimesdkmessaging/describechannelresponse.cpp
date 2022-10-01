// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelresponse.h"
#include "describechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelResponse
 * \brief The DescribeChannelResponse class provides an interace for ChimeSdkMessaging DescribeChannel responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannel
 */

/*!
 * Constructs a DescribeChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelResponse::DescribeChannelResponse(
        const DescribeChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelRequest * DescribeChannelResponse::request() const
{
    Q_D(const DescribeChannelResponse);
    return static_cast<const DescribeChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannel \a response.
 */
void DescribeChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelResponsePrivate
 * \brief The DescribeChannelResponsePrivate class provides private implementation for DescribeChannelResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelResponsePrivate object with public implementation \a q.
 */
DescribeChannelResponsePrivate::DescribeChannelResponsePrivate(
    DescribeChannelResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannel response element from \a xml.
 */
void DescribeChannelResponsePrivate::parseDescribeChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
