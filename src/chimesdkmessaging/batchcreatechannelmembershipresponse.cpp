// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchcreatechannelmembershipresponse.h"
#include "batchcreatechannelmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::BatchCreateChannelMembershipResponse
 * \brief The BatchCreateChannelMembershipResponse class provides an interace for ChimeSdkMessaging BatchCreateChannelMembership responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::batchCreateChannelMembership
 */

/*!
 * Constructs a BatchCreateChannelMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
BatchCreateChannelMembershipResponse::BatchCreateChannelMembershipResponse(
        const BatchCreateChannelMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new BatchCreateChannelMembershipResponsePrivate(this), parent)
{
    setRequest(new BatchCreateChannelMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchCreateChannelMembershipRequest * BatchCreateChannelMembershipResponse::request() const
{
    Q_D(const BatchCreateChannelMembershipResponse);
    return static_cast<const BatchCreateChannelMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging BatchCreateChannelMembership \a response.
 */
void BatchCreateChannelMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCreateChannelMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::BatchCreateChannelMembershipResponsePrivate
 * \brief The BatchCreateChannelMembershipResponsePrivate class provides private implementation for BatchCreateChannelMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a BatchCreateChannelMembershipResponsePrivate object with public implementation \a q.
 */
BatchCreateChannelMembershipResponsePrivate::BatchCreateChannelMembershipResponsePrivate(
    BatchCreateChannelMembershipResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging BatchCreateChannelMembership response element from \a xml.
 */
void BatchCreateChannelMembershipResponsePrivate::parseBatchCreateChannelMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCreateChannelMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
