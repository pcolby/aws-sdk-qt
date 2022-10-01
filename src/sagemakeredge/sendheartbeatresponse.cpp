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

#include "sendheartbeatresponse.h"
#include "sendheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::SendHeartbeatResponse
 * \brief The SendHeartbeatResponse class provides an interace for SagemakerEdge SendHeartbeat responses.
 *
 * \inmodule QtAwsSagemakerEdge
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeClient::sendHeartbeat
 */

/*!
 * Constructs a SendHeartbeatResponse object for \a reply to \a request, with parent \a parent.
 */
SendHeartbeatResponse::SendHeartbeatResponse(
        const SendHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SagemakerEdgeResponse(new SendHeartbeatResponsePrivate(this), parent)
{
    setRequest(new SendHeartbeatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendHeartbeatRequest * SendHeartbeatResponse::request() const
{
    Q_D(const SendHeartbeatResponse);
    return static_cast<const SendHeartbeatRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SagemakerEdge SendHeartbeat \a response.
 */
void SendHeartbeatResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendHeartbeatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SagemakerEdge::SendHeartbeatResponsePrivate
 * \brief The SendHeartbeatResponsePrivate class provides private implementation for SendHeartbeatResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SendHeartbeatResponsePrivate object with public implementation \a q.
 */
SendHeartbeatResponsePrivate::SendHeartbeatResponsePrivate(
    SendHeartbeatResponse * const q) : SagemakerEdgeResponsePrivate(q)
{

}

/*!
 * Parses a SagemakerEdge SendHeartbeat response element from \a xml.
 */
void SendHeartbeatResponsePrivate::parseSendHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendHeartbeatResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SagemakerEdge
} // namespace QtAws
