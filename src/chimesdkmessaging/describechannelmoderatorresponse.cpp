// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmoderatorresponse.h"
#include "describechannelmoderatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratorResponse
 * \brief The DescribeChannelModeratorResponse class provides an interace for ChimeSdkMessaging DescribeChannelModerator responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelModerator
 */

/*!
 * Constructs a DescribeChannelModeratorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelModeratorResponse::DescribeChannelModeratorResponse(
        const DescribeChannelModeratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelModeratorResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelModeratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelModeratorRequest * DescribeChannelModeratorResponse::request() const
{
    Q_D(const DescribeChannelModeratorResponse);
    return static_cast<const DescribeChannelModeratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannelModerator \a response.
 */
void DescribeChannelModeratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelModeratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratorResponsePrivate
 * \brief The DescribeChannelModeratorResponsePrivate class provides private implementation for DescribeChannelModeratorResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelModeratorResponsePrivate object with public implementation \a q.
 */
DescribeChannelModeratorResponsePrivate::DescribeChannelModeratorResponsePrivate(
    DescribeChannelModeratorResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannelModerator response element from \a xml.
 */
void DescribeChannelModeratorResponsePrivate::parseDescribeChannelModeratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelModeratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
