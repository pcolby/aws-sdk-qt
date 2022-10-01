// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelbanresponse.h"
#include "describechannelbanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelBanResponse
 * \brief The DescribeChannelBanResponse class provides an interace for ChimeSdkMessaging DescribeChannelBan responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelBan
 */

/*!
 * Constructs a DescribeChannelBanResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelBanResponse::DescribeChannelBanResponse(
        const DescribeChannelBanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelBanResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelBanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelBanRequest * DescribeChannelBanResponse::request() const
{
    Q_D(const DescribeChannelBanResponse);
    return static_cast<const DescribeChannelBanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannelBan \a response.
 */
void DescribeChannelBanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelBanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelBanResponsePrivate
 * \brief The DescribeChannelBanResponsePrivate class provides private implementation for DescribeChannelBanResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelBanResponsePrivate object with public implementation \a q.
 */
DescribeChannelBanResponsePrivate::DescribeChannelBanResponsePrivate(
    DescribeChannelBanResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannelBan response element from \a xml.
 */
void DescribeChannelBanResponsePrivate::parseDescribeChannelBanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelBanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
