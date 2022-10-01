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

#include "createpackageimportjobresponse.h"
#include "createpackageimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreatePackageImportJobResponse
 * \brief The CreatePackageImportJobResponse class provides an interace for Panorama CreatePackageImportJob responses.
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
 * \sa PanoramaClient::createPackageImportJob
 */

/*!
 * Constructs a CreatePackageImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePackageImportJobResponse::CreatePackageImportJobResponse(
        const CreatePackageImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreatePackageImportJobResponsePrivate(this), parent)
{
    setRequest(new CreatePackageImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePackageImportJobRequest * CreatePackageImportJobResponse::request() const
{
    Q_D(const CreatePackageImportJobResponse);
    return static_cast<const CreatePackageImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreatePackageImportJob \a response.
 */
void CreatePackageImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePackageImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreatePackageImportJobResponsePrivate
 * \brief The CreatePackageImportJobResponsePrivate class provides private implementation for CreatePackageImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreatePackageImportJobResponsePrivate object with public implementation \a q.
 */
CreatePackageImportJobResponsePrivate::CreatePackageImportJobResponsePrivate(
    CreatePackageImportJobResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreatePackageImportJob response element from \a xml.
 */
void CreatePackageImportJobResponsePrivate::parseCreatePackageImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePackageImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
