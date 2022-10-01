// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesceneresponse.h"
#include "updatesceneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::UpdateSceneResponse
 * \brief The UpdateSceneResponse class provides an interace for IoTTwinMaker UpdateScene responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::updateScene
 */

/*!
 * Constructs a UpdateSceneResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSceneResponse::UpdateSceneResponse(
        const UpdateSceneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new UpdateSceneResponsePrivate(this), parent)
{
    setRequest(new UpdateSceneRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSceneRequest * UpdateSceneResponse::request() const
{
    Q_D(const UpdateSceneResponse);
    return static_cast<const UpdateSceneRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker UpdateScene \a response.
 */
void UpdateSceneResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSceneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::UpdateSceneResponsePrivate
 * \brief The UpdateSceneResponsePrivate class provides private implementation for UpdateSceneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a UpdateSceneResponsePrivate object with public implementation \a q.
 */
UpdateSceneResponsePrivate::UpdateSceneResponsePrivate(
    UpdateSceneResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker UpdateScene response element from \a xml.
 */
void UpdateSceneResponsePrivate::parseUpdateSceneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSceneResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
