// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmoderatedbyappinstanceuserresponse.h"
#include "describechannelmoderatedbyappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratedByAppInstanceUserResponse
 * \brief The DescribeChannelModeratedByAppInstanceUserResponse class provides an interace for ChimeSdkMessaging DescribeChannelModeratedByAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelModeratedByAppInstanceUser
 */

/*!
 * Constructs a DescribeChannelModeratedByAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelModeratedByAppInstanceUserResponse::DescribeChannelModeratedByAppInstanceUserResponse(
        const DescribeChannelModeratedByAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelModeratedByAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelModeratedByAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelModeratedByAppInstanceUserRequest * DescribeChannelModeratedByAppInstanceUserResponse::request() const
{
    Q_D(const DescribeChannelModeratedByAppInstanceUserResponse);
    return static_cast<const DescribeChannelModeratedByAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannelModeratedByAppInstanceUser \a response.
 */
void DescribeChannelModeratedByAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelModeratedByAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratedByAppInstanceUserResponsePrivate
 * \brief The DescribeChannelModeratedByAppInstanceUserResponsePrivate class provides private implementation for DescribeChannelModeratedByAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelModeratedByAppInstanceUserResponsePrivate object with public implementation \a q.
 */
DescribeChannelModeratedByAppInstanceUserResponsePrivate::DescribeChannelModeratedByAppInstanceUserResponsePrivate(
    DescribeChannelModeratedByAppInstanceUserResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannelModeratedByAppInstanceUser response element from \a xml.
 */
void DescribeChannelModeratedByAppInstanceUserResponsePrivate::parseDescribeChannelModeratedByAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelModeratedByAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
