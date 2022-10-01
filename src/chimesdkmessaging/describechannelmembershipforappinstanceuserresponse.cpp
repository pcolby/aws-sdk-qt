// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmembershipforappinstanceuserresponse.h"
#include "describechannelmembershipforappinstanceuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelMembershipForAppInstanceUserResponse
 * \brief The DescribeChannelMembershipForAppInstanceUserResponse class provides an interace for ChimeSdkMessaging DescribeChannelMembershipForAppInstanceUser responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelMembershipForAppInstanceUser
 */

/*!
 * Constructs a DescribeChannelMembershipForAppInstanceUserResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelMembershipForAppInstanceUserResponse::DescribeChannelMembershipForAppInstanceUserResponse(
        const DescribeChannelMembershipForAppInstanceUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelMembershipForAppInstanceUserResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelMembershipForAppInstanceUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelMembershipForAppInstanceUserRequest * DescribeChannelMembershipForAppInstanceUserResponse::request() const
{
    Q_D(const DescribeChannelMembershipForAppInstanceUserResponse);
    return static_cast<const DescribeChannelMembershipForAppInstanceUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannelMembershipForAppInstanceUser \a response.
 */
void DescribeChannelMembershipForAppInstanceUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelMembershipForAppInstanceUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelMembershipForAppInstanceUserResponsePrivate
 * \brief The DescribeChannelMembershipForAppInstanceUserResponsePrivate class provides private implementation for DescribeChannelMembershipForAppInstanceUserResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelMembershipForAppInstanceUserResponsePrivate object with public implementation \a q.
 */
DescribeChannelMembershipForAppInstanceUserResponsePrivate::DescribeChannelMembershipForAppInstanceUserResponsePrivate(
    DescribeChannelMembershipForAppInstanceUserResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannelMembershipForAppInstanceUser response element from \a xml.
 */
void DescribeChannelMembershipForAppInstanceUserResponsePrivate::parseDescribeChannelMembershipForAppInstanceUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelMembershipForAppInstanceUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
