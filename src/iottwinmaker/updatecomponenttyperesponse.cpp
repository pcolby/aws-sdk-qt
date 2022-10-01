// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomponenttyperesponse.h"
#include "updatecomponenttyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateComponentTypeResponse
 * \brief The UpdateComponentTypeResponse class provides an interace for IoTTwinMaker UpdateComponentType responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateComponentType
 */

/*!
 * Constructs a UpdateComponentTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateComponentTypeResponse::UpdateComponentTypeResponse(
        const UpdateComponentTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new UpdateComponentTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateComponentTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateComponentTypeRequest * UpdateComponentTypeResponse::request() const
{
    Q_D(const UpdateComponentTypeResponse);
    return static_cast<const UpdateComponentTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker UpdateComponentType \a response.
 */
void UpdateComponentTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateComponentTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateComponentTypeResponsePrivate
 * \brief The UpdateComponentTypeResponsePrivate class provides private implementation for UpdateComponentTypeResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateComponentTypeResponsePrivate object with public implementation \a q.
 */
UpdateComponentTypeResponsePrivate::UpdateComponentTypeResponsePrivate(
    UpdateComponentTypeResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker UpdateComponentType response element from \a xml.
 */
void UpdateComponentTypeResponsePrivate::parseUpdateComponentTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateComponentTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
