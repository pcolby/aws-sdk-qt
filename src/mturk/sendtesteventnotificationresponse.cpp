/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sendtesteventnotificationresponse.h"
#include "sendtesteventnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::SendTestEventNotificationResponse
 * \brief The SendTestEventNotificationResponse class provides an interace for MTurk SendTestEventNotification responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::sendTestEventNotification
 */

/*!
 * Constructs a SendTestEventNotificationResponse object for \a reply to \a request, with parent \a parent.
 */
SendTestEventNotificationResponse::SendTestEventNotificationResponse(
        const SendTestEventNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new SendTestEventNotificationResponsePrivate(this), parent)
{
    setRequest(new SendTestEventNotificationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendTestEventNotificationRequest * SendTestEventNotificationResponse::request() const
{
    return static_cast<const SendTestEventNotificationRequest *>(MTurkResponse::request());
}

/*!
 * \reimp
 * Parses a successful MTurk SendTestEventNotification \a response.
 */
void SendTestEventNotificationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendTestEventNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::SendTestEventNotificationResponsePrivate
 * \brief The SendTestEventNotificationResponsePrivate class provides private implementation for SendTestEventNotificationResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a SendTestEventNotificationResponsePrivate object with public implementation \a q.
 */
SendTestEventNotificationResponsePrivate::SendTestEventNotificationResponsePrivate(
    SendTestEventNotificationResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk SendTestEventNotification response element from \a xml.
 */
void SendTestEventNotificationResponsePrivate::parseSendTestEventNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTestEventNotificationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
