// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerpackageversionresponse.h"
#include "registerpackageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::RegisterPackageVersionResponse
 * \brief The RegisterPackageVersionResponse class provides an interace for Panorama RegisterPackageVersion responses.
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
 * \sa PanoramaClient::registerPackageVersion
 */

/*!
 * Constructs a RegisterPackageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterPackageVersionResponse::RegisterPackageVersionResponse(
        const RegisterPackageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new RegisterPackageVersionResponsePrivate(this), parent)
{
    setRequest(new RegisterPackageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterPackageVersionRequest * RegisterPackageVersionResponse::request() const
{
    Q_D(const RegisterPackageVersionResponse);
    return static_cast<const RegisterPackageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama RegisterPackageVersion \a response.
 */
void RegisterPackageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterPackageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::RegisterPackageVersionResponsePrivate
 * \brief The RegisterPackageVersionResponsePrivate class provides private implementation for RegisterPackageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a RegisterPackageVersionResponsePrivate object with public implementation \a q.
 */
RegisterPackageVersionResponsePrivate::RegisterPackageVersionResponsePrivate(
    RegisterPackageVersionResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama RegisterPackageVersion response element from \a xml.
 */
void RegisterPackageVersionResponsePrivate::parseRegisterPackageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterPackageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
