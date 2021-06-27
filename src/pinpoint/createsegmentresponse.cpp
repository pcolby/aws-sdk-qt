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

#include "createsegmentresponse.h"
#include "createsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSegmentResponse
 * \brief The CreateSegmentResponse class provides an interace for Pinpoint CreateSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createSegment
 */

/*!
 * Constructs a CreateSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSegmentResponse::CreateSegmentResponse(
        const CreateSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateSegmentResponsePrivate(this), parent)
{
    setRequest(new CreateSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSegmentRequest * CreateSegmentResponse::request() const
{
    return static_cast<const CreateSegmentRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateSegment \a response.
 */
void CreateSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateSegmentResponsePrivate
 * \brief The CreateSegmentResponsePrivate class provides private implementation for CreateSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSegmentResponsePrivate object with public implementation \a q.
 */
CreateSegmentResponsePrivate::CreateSegmentResponsePrivate(
    CreateSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateSegment response element from \a xml.
 */
void CreateSegmentResponsePrivate::parseCreateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
