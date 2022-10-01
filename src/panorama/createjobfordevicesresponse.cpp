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

#include "createjobfordevicesresponse.h"
#include "createjobfordevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateJobForDevicesResponse
 * \brief The CreateJobForDevicesResponse class provides an interace for Panorama CreateJobForDevices responses.
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
 * \sa PanoramaClient::createJobForDevices
 */

/*!
 * Constructs a CreateJobForDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
CreateJobForDevicesResponse::CreateJobForDevicesResponse(
        const CreateJobForDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreateJobForDevicesResponsePrivate(this), parent)
{
    setRequest(new CreateJobForDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateJobForDevicesRequest * CreateJobForDevicesResponse::request() const
{
    Q_D(const CreateJobForDevicesResponse);
    return static_cast<const CreateJobForDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreateJobForDevices \a response.
 */
void CreateJobForDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateJobForDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreateJobForDevicesResponsePrivate
 * \brief The CreateJobForDevicesResponsePrivate class provides private implementation for CreateJobForDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateJobForDevicesResponsePrivate object with public implementation \a q.
 */
CreateJobForDevicesResponsePrivate::CreateJobForDevicesResponsePrivate(
    CreateJobForDevicesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreateJobForDevices response element from \a xml.
 */
void CreateJobForDevicesResponsePrivate::parseCreateJobForDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobForDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
