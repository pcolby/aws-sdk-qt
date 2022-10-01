// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
