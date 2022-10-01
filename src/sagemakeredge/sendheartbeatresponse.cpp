// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
