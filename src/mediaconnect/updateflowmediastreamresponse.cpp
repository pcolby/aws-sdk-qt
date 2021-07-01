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

#include "updateflowmediastreamresponse.h"
#include "updateflowmediastreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamResponse
 * \brief The UpdateFlowMediaStreamResponse class provides an interace for MediaConnect UpdateFlowMediaStream responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowMediaStream
 */

/*!
 * Constructs a UpdateFlowMediaStreamResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowMediaStreamResponse::UpdateFlowMediaStreamResponse(
        const UpdateFlowMediaStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowMediaStreamResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowMediaStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowMediaStreamRequest * UpdateFlowMediaStreamResponse::request() const
{
    Q_D(const UpdateFlowMediaStreamResponse);
    return static_cast<const UpdateFlowMediaStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlowMediaStream \a response.
 */
void UpdateFlowMediaStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowMediaStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamResponsePrivate
 * \brief The UpdateFlowMediaStreamResponsePrivate class provides private implementation for UpdateFlowMediaStreamResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowMediaStreamResponsePrivate object with public implementation \a q.
 */
UpdateFlowMediaStreamResponsePrivate::UpdateFlowMediaStreamResponsePrivate(
    UpdateFlowMediaStreamResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlowMediaStream response element from \a xml.
 */
void UpdateFlowMediaStreamResponsePrivate::parseUpdateFlowMediaStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowMediaStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
