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

#include "deletemultiregionaccesspointresponse.h"
#include "deletemultiregionaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteMultiRegionAccessPointResponse
 * \brief The DeleteMultiRegionAccessPointResponse class provides an interace for S3Control DeleteMultiRegionAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteMultiRegionAccessPoint
 */

/*!
 * Constructs a DeleteMultiRegionAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMultiRegionAccessPointResponse::DeleteMultiRegionAccessPointResponse(
        const DeleteMultiRegionAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteMultiRegionAccessPointResponsePrivate(this), parent)
{
    setRequest(new DeleteMultiRegionAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMultiRegionAccessPointRequest * DeleteMultiRegionAccessPointResponse::request() const
{
    Q_D(const DeleteMultiRegionAccessPointResponse);
    return static_cast<const DeleteMultiRegionAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteMultiRegionAccessPoint \a response.
 */
void DeleteMultiRegionAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMultiRegionAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteMultiRegionAccessPointResponsePrivate
 * \brief The DeleteMultiRegionAccessPointResponsePrivate class provides private implementation for DeleteMultiRegionAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteMultiRegionAccessPointResponsePrivate object with public implementation \a q.
 */
DeleteMultiRegionAccessPointResponsePrivate::DeleteMultiRegionAccessPointResponsePrivate(
    DeleteMultiRegionAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteMultiRegionAccessPoint response element from \a xml.
 */
void DeleteMultiRegionAccessPointResponsePrivate::parseDeleteMultiRegionAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMultiRegionAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
