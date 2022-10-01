// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendusersmessagesresponse.h"
#include "sendusersmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesResponse
 * \brief The SendUsersMessagesResponse class provides an interace for Pinpoint SendUsersMessages responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendUsersMessages
 */

/*!
 * Constructs a SendUsersMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
SendUsersMessagesResponse::SendUsersMessagesResponse(
        const SendUsersMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendUsersMessagesResponsePrivate(this), parent)
{
    setRequest(new SendUsersMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendUsersMessagesRequest * SendUsersMessagesResponse::request() const
{
    Q_D(const SendUsersMessagesResponse);
    return static_cast<const SendUsersMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint SendUsersMessages \a response.
 */
void SendUsersMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendUsersMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesResponsePrivate
 * \brief The SendUsersMessagesResponsePrivate class provides private implementation for SendUsersMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendUsersMessagesResponsePrivate object with public implementation \a q.
 */
SendUsersMessagesResponsePrivate::SendUsersMessagesResponsePrivate(
    SendUsersMessagesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint SendUsersMessages response element from \a xml.
 */
void SendUsersMessagesResponsePrivate::parseSendUsersMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendUsersMessagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
