// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
