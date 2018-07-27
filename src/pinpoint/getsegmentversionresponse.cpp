/*
    Copyright 2013-2018 Paul Colby

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

#include "getsegmentversionresponse.h"
#include "getsegmentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionResponse
 * \brief The GetSegmentVersionResponse class provides an interace for Pinpoint GetSegmentVersion responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegmentVersion
 */

/*!
 * Constructs a GetSegmentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentVersionResponse::GetSegmentVersionResponse(
        const GetSegmentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentVersionResponsePrivate(this), parent)
{
    setRequest(new GetSegmentVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentVersionRequest * GetSegmentVersionResponse::request() const
{
    Q_D(const GetSegmentVersionResponse);
    return static_cast<const GetSegmentVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentVersion \a response.
 */
void GetSegmentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionResponsePrivate
 * \brief The GetSegmentVersionResponsePrivate class provides private implementation for GetSegmentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionResponsePrivate object with public implementation \a q.
 */
GetSegmentVersionResponsePrivate::GetSegmentVersionResponsePrivate(
    GetSegmentVersionResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentVersion response element from \a xml.
 */
void GetSegmentVersionResponsePrivate::parseGetSegmentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
