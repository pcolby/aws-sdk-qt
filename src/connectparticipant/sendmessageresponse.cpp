// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendmessageresponse.h"
#include "sendmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::SendMessageResponse
 * \brief The SendMessageResponse class provides an interace for ConnectParticipant SendMessage responses.
 *
 * \inmodule QtAwsConnectParticipant
 *
 *  Amazon Connect is a cloud-based contact center solution that makes it easy to set up and manage a customer contact
 *  center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect enables customer contacts through voice or
 * 
 *  chat>
 * 
 *  The APIs described here are used by chat participants, such as agents and
 *
 * \sa ConnectParticipantClient::sendMessage
 */

/*!
 * Constructs a SendMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendMessageResponse::SendMessageResponse(
        const SendMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new SendMessageResponsePrivate(this), parent)
{
    setRequest(new SendMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendMessageRequest * SendMessageResponse::request() const
{
    Q_D(const SendMessageResponse);
    return static_cast<const SendMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant SendMessage \a response.
 */
void SendMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::SendMessageResponsePrivate
 * \brief The SendMessageResponsePrivate class provides private implementation for SendMessageResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a SendMessageResponsePrivate object with public implementation \a q.
 */
SendMessageResponsePrivate::SendMessageResponsePrivate(
    SendMessageResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant SendMessage response element from \a xml.
 */
void SendMessageResponsePrivate::parseSendMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
