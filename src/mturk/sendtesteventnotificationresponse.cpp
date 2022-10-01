// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const SendTestEventNotificationResponse);
    return static_cast<const SendTestEventNotificationRequest *>(d->request);
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
