/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatesegmentresponse.h"
#include "updatesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSegmentResponse
 * \brief The UpdateSegmentResponse class provides an interace for Pinpoint UpdateSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateSegment
 */

/*!
 * Constructs a UpdateSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSegmentResponse::UpdateSegmentResponse(
        const UpdateSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSegmentResponsePrivate(this), parent)
{
    setRequest(new UpdateSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSegmentRequest * UpdateSegmentResponse::request() const
{
    Q_D(const UpdateSegmentResponse);
    return static_cast<const UpdateSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateSegment \a response.
 */
void UpdateSegmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateSegmentResponsePrivate
 * \brief The UpdateSegmentResponsePrivate class provides private implementation for UpdateSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSegmentResponsePrivate object with public implementation \a q.
 */
UpdateSegmentResponsePrivate::UpdateSegmentResponsePrivate(
    UpdateSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateSegment response element from \a xml.
 */
void UpdateSegmentResponsePrivate::parseUpdateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSegmentResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
