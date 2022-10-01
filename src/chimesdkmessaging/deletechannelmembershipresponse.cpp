// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelmembershipresponse.h"
#include "deletechannelmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelMembershipResponse
 * \brief The DeleteChannelMembershipResponse class provides an interace for ChimeSdkMessaging DeleteChannelMembership responses.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::deleteChannelMembership
 */

/*!
 * Constructs a DeleteChannelMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteChannelMembershipResponse::DeleteChannelMembershipResponse(
        const DeleteChannelMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ChimeSdkMessagingResponse(new DeleteChannelMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteChannelMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteChannelMembershipRequest * DeleteChannelMembershipResponse::request() const
{
    Q_D(const DeleteChannelMembershipResponse);
    return static_cast<const DeleteChannelMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ChimeSdkMessaging DeleteChannelMembership \a response.
 */
void DeleteChannelMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteChannelMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelMembershipResponsePrivate
 * \brief The DeleteChannelMembershipResponsePrivate class provides private implementation for DeleteChannelMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DeleteChannelMembershipResponsePrivate object with public implementation \a q.
 */
DeleteChannelMembershipResponsePrivate::DeleteChannelMembershipResponsePrivate(
    DeleteChannelMembershipResponse * const q) : ChimeSdkMessagingResponsePrivate(q)
{

}

/*!
 * Parses a ChimeSdkMessaging DeleteChannelMembership response element from \a xml.
 */
void DeleteChannelMembershipResponsePrivate::parseDeleteChannelMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChannelMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ChimeSdkMessaging
} // namespace QtAws
