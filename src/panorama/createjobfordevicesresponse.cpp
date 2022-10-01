// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
