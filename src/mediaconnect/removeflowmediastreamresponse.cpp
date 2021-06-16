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

#include "removeflowmediastreamresponse.h"
#include "removeflowmediastreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowMediaStreamResponse
 * \brief The RemoveFlowMediaStreamResponse class provides an interace for MediaConnect RemoveFlowMediaStream responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowMediaStream
 */

/*!
 * Constructs a RemoveFlowMediaStreamResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowMediaStreamResponse::RemoveFlowMediaStreamResponse(
        const RemoveFlowMediaStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowMediaStreamResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowMediaStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowMediaStreamRequest * RemoveFlowMediaStreamResponse::request() const
{
    Q_D(const RemoveFlowMediaStreamResponse);
    return static_cast<const RemoveFlowMediaStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowMediaStream \a response.
 */
void RemoveFlowMediaStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowMediaStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowMediaStreamResponsePrivate
 * \brief The RemoveFlowMediaStreamResponsePrivate class provides private implementation for RemoveFlowMediaStreamResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowMediaStreamResponsePrivate object with public implementation \a q.
 */
RemoveFlowMediaStreamResponsePrivate::RemoveFlowMediaStreamResponsePrivate(
    RemoveFlowMediaStreamResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowMediaStream response element from \a xml.
 */
void RemoveFlowMediaStreamResponsePrivate::parseRemoveFlowMediaStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowMediaStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
