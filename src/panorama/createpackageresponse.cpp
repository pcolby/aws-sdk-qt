// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpackageresponse.h"
#include "createpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreatePackageResponse
 * \brief The CreatePackageResponse class provides an interace for Panorama CreatePackage responses.
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
 * \sa PanoramaClient::createPackage
 */

/*!
 * Constructs a CreatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePackageResponse::CreatePackageResponse(
        const CreatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new CreatePackageResponsePrivate(this), parent)
{
    setRequest(new CreatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePackageRequest * CreatePackageResponse::request() const
{
    Q_D(const CreatePackageResponse);
    return static_cast<const CreatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama CreatePackage \a response.
 */
void CreatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::CreatePackageResponsePrivate
 * \brief The CreatePackageResponsePrivate class provides private implementation for CreatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreatePackageResponsePrivate object with public implementation \a q.
 */
CreatePackageResponsePrivate::CreatePackageResponsePrivate(
    CreatePackageResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama CreatePackage response element from \a xml.
 */
void CreatePackageResponsePrivate::parseCreatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
