// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterpackageversionresponse.h"
#include "deregisterpackageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeregisterPackageVersionResponse
 * \brief The DeregisterPackageVersionResponse class provides an interace for Panorama DeregisterPackageVersion responses.
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
 * \sa PanoramaClient::deregisterPackageVersion
 */

/*!
 * Constructs a DeregisterPackageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterPackageVersionResponse::DeregisterPackageVersionResponse(
        const DeregisterPackageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DeregisterPackageVersionResponsePrivate(this), parent)
{
    setRequest(new DeregisterPackageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterPackageVersionRequest * DeregisterPackageVersionResponse::request() const
{
    Q_D(const DeregisterPackageVersionResponse);
    return static_cast<const DeregisterPackageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DeregisterPackageVersion \a response.
 */
void DeregisterPackageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterPackageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DeregisterPackageVersionResponsePrivate
 * \brief The DeregisterPackageVersionResponsePrivate class provides private implementation for DeregisterPackageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeregisterPackageVersionResponsePrivate object with public implementation \a q.
 */
DeregisterPackageVersionResponsePrivate::DeregisterPackageVersionResponsePrivate(
    DeregisterPackageVersionResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DeregisterPackageVersion response element from \a xml.
 */
void DeregisterPackageVersionResponsePrivate::parseDeregisterPackageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterPackageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
