// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationresponse.h"
#include "updateapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTFleetHub {

/*!
 * \class QtAws::IoTFleetHub::UpdateApplicationResponse
 * \brief The UpdateApplicationResponse class provides an interace for IoTFleetHub UpdateApplication responses.
 *
 * \inmodule QtAwsIoTFleetHub
 *
 *  With Fleet Hub for AWS IoT Device Management you can build stand-alone web applications for monitoring the health of
 *  your device
 * 
 *  fleets> <note>
 * 
 *  Fleet Hub for AWS IoT Device Management is in public preview and is subject to
 *
 * \sa IoTFleetHubClient::updateApplication
 */

/*!
 * Constructs a UpdateApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationResponse::UpdateApplicationResponse(
        const UpdateApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTFleetHubResponse(new UpdateApplicationResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationRequest * UpdateApplicationResponse::request() const
{
    Q_D(const UpdateApplicationResponse);
    return static_cast<const UpdateApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTFleetHub UpdateApplication \a response.
 */
void UpdateApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTFleetHub::UpdateApplicationResponsePrivate
 * \brief The UpdateApplicationResponsePrivate class provides private implementation for UpdateApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTFleetHub
 */

/*!
 * Constructs a UpdateApplicationResponsePrivate object with public implementation \a q.
 */
UpdateApplicationResponsePrivate::UpdateApplicationResponsePrivate(
    UpdateApplicationResponse * const q) : IoTFleetHubResponsePrivate(q)
{

}

/*!
 * Parses a IoTFleetHub UpdateApplication response element from \a xml.
 */
void UpdateApplicationResponsePrivate::parseUpdateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTFleetHub
} // namespace QtAws
