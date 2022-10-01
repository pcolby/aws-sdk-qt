// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "provisiondeviceresponse.h"
#include "provisiondeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ProvisionDeviceResponse
 * \brief The ProvisionDeviceResponse class provides an interace for Panorama ProvisionDevice responses.
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
 * \sa PanoramaClient::provisionDevice
 */

/*!
 * Constructs a ProvisionDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ProvisionDeviceResponse::ProvisionDeviceResponse(
        const ProvisionDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ProvisionDeviceResponsePrivate(this), parent)
{
    setRequest(new ProvisionDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ProvisionDeviceRequest * ProvisionDeviceResponse::request() const
{
    Q_D(const ProvisionDeviceResponse);
    return static_cast<const ProvisionDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ProvisionDevice \a response.
 */
void ProvisionDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ProvisionDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ProvisionDeviceResponsePrivate
 * \brief The ProvisionDeviceResponsePrivate class provides private implementation for ProvisionDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ProvisionDeviceResponsePrivate object with public implementation \a q.
 */
ProvisionDeviceResponsePrivate::ProvisionDeviceResponsePrivate(
    ProvisionDeviceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ProvisionDevice response element from \a xml.
 */
void ProvisionDeviceResponsePrivate::parseProvisionDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ProvisionDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
