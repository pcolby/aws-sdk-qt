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

#include "getmultiregionaccesspointresponse.h"
#include "getmultiregionaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointResponse
 * \brief The GetMultiRegionAccessPointResponse class provides an interace for S3Control GetMultiRegionAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPoint
 */

/*!
 * Constructs a GetMultiRegionAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
GetMultiRegionAccessPointResponse::GetMultiRegionAccessPointResponse(
        const GetMultiRegionAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetMultiRegionAccessPointResponsePrivate(this), parent)
{
    setRequest(new GetMultiRegionAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMultiRegionAccessPointRequest * GetMultiRegionAccessPointResponse::request() const
{
    Q_D(const GetMultiRegionAccessPointResponse);
    return static_cast<const GetMultiRegionAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetMultiRegionAccessPoint \a response.
 */
void GetMultiRegionAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMultiRegionAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointResponsePrivate
 * \brief The GetMultiRegionAccessPointResponsePrivate class provides private implementation for GetMultiRegionAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointResponsePrivate object with public implementation \a q.
 */
GetMultiRegionAccessPointResponsePrivate::GetMultiRegionAccessPointResponsePrivate(
    GetMultiRegionAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetMultiRegionAccessPoint response element from \a xml.
 */
void GetMultiRegionAccessPointResponsePrivate::parseGetMultiRegionAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMultiRegionAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
