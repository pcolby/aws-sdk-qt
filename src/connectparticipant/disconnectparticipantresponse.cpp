// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectparticipantresponse.h"
#include "disconnectparticipantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::DisconnectParticipantResponse
 * \brief The DisconnectParticipantResponse class provides an interace for ConnectParticipant DisconnectParticipant responses.
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
 * \sa ConnectParticipantClient::disconnectParticipant
 */

/*!
 * Constructs a DisconnectParticipantResponse object for \a reply to \a request, with parent \a parent.
 */
DisconnectParticipantResponse::DisconnectParticipantResponse(
        const DisconnectParticipantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new DisconnectParticipantResponsePrivate(this), parent)
{
    setRequest(new DisconnectParticipantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisconnectParticipantRequest * DisconnectParticipantResponse::request() const
{
    Q_D(const DisconnectParticipantResponse);
    return static_cast<const DisconnectParticipantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant DisconnectParticipant \a response.
 */
void DisconnectParticipantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisconnectParticipantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::DisconnectParticipantResponsePrivate
 * \brief The DisconnectParticipantResponsePrivate class provides private implementation for DisconnectParticipantResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a DisconnectParticipantResponsePrivate object with public implementation \a q.
 */
DisconnectParticipantResponsePrivate::DisconnectParticipantResponsePrivate(
    DisconnectParticipantResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant DisconnectParticipant response element from \a xml.
 */
void DisconnectParticipantResponsePrivate::parseDisconnectParticipantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisconnectParticipantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
