// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmembershipresponse.h"
#include "describechannelmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelMembershipResponse
 * \brief The DescribeChannelMembershipResponse class provides an interace for ChimeSdkMessaging DescribeChannelMembership responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelMembership
 */

/*!
 * Constructs a DescribeChannelMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChannelMembershipResponse::DescribeChannelMembershipResponse(
        const DescribeChannelMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DescribeChannelMembershipResponsePrivate(this), parent)
{
    setRequest(new DescribeChannelMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChannelMembershipRequest * DescribeChannelMembershipResponse::request() const
{
    Q_D(const DescribeChannelMembershipResponse);
    return static_cast<const DescribeChannelMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DescribeChannelMembership \a response.
 */
void DescribeChannelMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChannelMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelMembershipResponsePrivate
 * \brief The DescribeChannelMembershipResponsePrivate class provides private implementation for DescribeChannelMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelMembershipResponsePrivate object with public implementation \a q.
 */
DescribeChannelMembershipResponsePrivate::DescribeChannelMembershipResponsePrivate(
    DescribeChannelMembershipResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DescribeChannelMembership response element from \a xml.
 */
void DescribeChannelMembershipResponsePrivate::parseDescribeChannelMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChannelMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
