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
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::SendHeartbeatResponse
 * \brief The SendHeartbeatResponse class provides an interace for SagemakerEdgeManager SendHeartbeat responses.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeManagerClient::sendHeartbeat
 */

/*!
 * Constructs a SendHeartbeatResponse object for \a reply to \a request, with parent \a parent.
 */
SendHeartbeatResponse::SendHeartbeatResponse(
        const SendHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SagemakerEdgeManagerResponse(new SendHeartbeatResponsePrivate(this), parent)
{
    setRequest(new SendHeartbeatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendHeartbeatRequest * SendHeartbeatResponse::request() const
{
    return static_cast<const SendHeartbeatRequest *>(SagemakerEdgeManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SagemakerEdgeManager SendHeartbeat \a response.
 */
void SendHeartbeatResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendHeartbeatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SagemakerEdgeManager::SendHeartbeatResponsePrivate
 * \brief The SendHeartbeatResponsePrivate class provides private implementation for SendHeartbeatResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a SendHeartbeatResponsePrivate object with public implementation \a q.
 */
SendHeartbeatResponsePrivate::SendHeartbeatResponsePrivate(
    SendHeartbeatResponse * const q) : SagemakerEdgeManagerResponsePrivate(q)
{

}

/*!
 * Parses a SagemakerEdgeManager SendHeartbeat response element from \a xml.
 */
void SendHeartbeatResponsePrivate::parseSendHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendHeartbeatResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SagemakerEdgeManager
} // namespace QtAws
