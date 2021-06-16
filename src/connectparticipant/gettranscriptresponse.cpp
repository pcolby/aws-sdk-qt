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

#include "gettranscriptresponse.h"
#include "gettranscriptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::GetTranscriptResponse
 * \brief The GetTranscriptResponse class provides an interace for ConnectParticipant GetTranscript responses.
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
 * \sa ConnectParticipantClient::getTranscript
 */

/*!
 * Constructs a GetTranscriptResponse object for \a reply to \a request, with parent \a parent.
 */
GetTranscriptResponse::GetTranscriptResponse(
        const GetTranscriptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new GetTranscriptResponsePrivate(this), parent)
{
    setRequest(new GetTranscriptRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTranscriptRequest * GetTranscriptResponse::request() const
{
    Q_D(const GetTranscriptResponse);
    return static_cast<const GetTranscriptRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant GetTranscript \a response.
 */
void GetTranscriptResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTranscriptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::GetTranscriptResponsePrivate
 * \brief The GetTranscriptResponsePrivate class provides private implementation for GetTranscriptResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a GetTranscriptResponsePrivate object with public implementation \a q.
 */
GetTranscriptResponsePrivate::GetTranscriptResponsePrivate(
    GetTranscriptResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant GetTranscript response element from \a xml.
 */
void GetTranscriptResponsePrivate::parseGetTranscriptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTranscriptResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
