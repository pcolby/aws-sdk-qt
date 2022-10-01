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

#include "updatedevicemetadataresponse.h"
#include "updatedevicemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::UpdateDeviceMetadataResponse
 * \brief The UpdateDeviceMetadataResponse class provides an interace for Panorama UpdateDeviceMetadata responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::updateDeviceMetadata
 */

/*!
 * Constructs a UpdateDeviceMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceMetadataResponse::UpdateDeviceMetadataResponse(
        const UpdateDeviceMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new UpdateDeviceMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceMetadataRequest * UpdateDeviceMetadataResponse::request() const
{
    Q_D(const UpdateDeviceMetadataResponse);
    return static_cast<const UpdateDeviceMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama UpdateDeviceMetadata \a response.
 */
void UpdateDeviceMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::UpdateDeviceMetadataResponsePrivate
 * \brief The UpdateDeviceMetadataResponsePrivate class provides private implementation for UpdateDeviceMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a UpdateDeviceMetadataResponsePrivate object with public implementation \a q.
 */
UpdateDeviceMetadataResponsePrivate::UpdateDeviceMetadataResponsePrivate(
    UpdateDeviceMetadataResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama UpdateDeviceMetadata response element from \a xml.
 */
void UpdateDeviceMetadataResponsePrivate::parseUpdateDeviceMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
