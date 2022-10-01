// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
