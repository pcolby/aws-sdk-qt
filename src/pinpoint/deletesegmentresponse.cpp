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

#include "deletesegmentresponse.h"
#include "deletesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSegmentResponse
 * \brief The DeleteSegmentResponse class provides an interace for Pinpoint DeleteSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteSegment
 */

/*!
 * Constructs a DeleteSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSegmentResponse::DeleteSegmentResponse(
        const DeleteSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSegmentResponsePrivate(this), parent)
{
    setRequest(new DeleteSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSegmentRequest * DeleteSegmentResponse::request() const
{
    Q_D(const DeleteSegmentResponse);
    return static_cast<const DeleteSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteSegment \a response.
 */
void DeleteSegmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteSegmentResponsePrivate
 * \brief The DeleteSegmentResponsePrivate class provides private implementation for DeleteSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSegmentResponsePrivate object with public implementation \a q.
 */
DeleteSegmentResponsePrivate::DeleteSegmentResponsePrivate(
    DeleteSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteSegment response element from \a xml.
 */
void DeleteSegmentResponsePrivate::parseDeleteSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSegmentResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
