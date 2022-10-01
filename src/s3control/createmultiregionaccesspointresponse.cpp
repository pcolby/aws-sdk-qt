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

#include "createmultiregionaccesspointresponse.h"
#include "createmultiregionaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateMultiRegionAccessPointResponse
 * \brief The CreateMultiRegionAccessPointResponse class provides an interace for S3Control CreateMultiRegionAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createMultiRegionAccessPoint
 */

/*!
 * Constructs a CreateMultiRegionAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMultiRegionAccessPointResponse::CreateMultiRegionAccessPointResponse(
        const CreateMultiRegionAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateMultiRegionAccessPointResponsePrivate(this), parent)
{
    setRequest(new CreateMultiRegionAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMultiRegionAccessPointRequest * CreateMultiRegionAccessPointResponse::request() const
{
    Q_D(const CreateMultiRegionAccessPointResponse);
    return static_cast<const CreateMultiRegionAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control CreateMultiRegionAccessPoint \a response.
 */
void CreateMultiRegionAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMultiRegionAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateMultiRegionAccessPointResponsePrivate
 * \brief The CreateMultiRegionAccessPointResponsePrivate class provides private implementation for CreateMultiRegionAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateMultiRegionAccessPointResponsePrivate object with public implementation \a q.
 */
CreateMultiRegionAccessPointResponsePrivate::CreateMultiRegionAccessPointResponsePrivate(
    CreateMultiRegionAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateMultiRegionAccessPoint response element from \a xml.
 */
void CreateMultiRegionAccessPointResponsePrivate::parseCreateMultiRegionAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultiRegionAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
