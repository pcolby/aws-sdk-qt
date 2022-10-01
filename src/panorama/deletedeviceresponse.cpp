// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeviceresponse.h"
#include "deletedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeleteDeviceResponse
 * \brief The DeleteDeviceResponse class provides an interace for Panorama DeleteDevice responses.
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
 * \sa PanoramaClient::deleteDevice
 */

/*!
 * Constructs a DeleteDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceResponse::DeleteDeviceResponse(
        const DeleteDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DeleteDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceRequest * DeleteDeviceResponse::request() const
{
    Q_D(const DeleteDeviceResponse);
    return static_cast<const DeleteDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DeleteDevice \a response.
 */
void DeleteDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DeleteDeviceResponsePrivate
 * \brief The DeleteDeviceResponsePrivate class provides private implementation for DeleteDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeleteDeviceResponsePrivate object with public implementation \a q.
 */
DeleteDeviceResponsePrivate::DeleteDeviceResponsePrivate(
    DeleteDeviceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DeleteDevice response element from \a xml.
 */
void DeleteDeviceResponsePrivate::parseDeleteDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
