// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkspaceresponse.h"
#include "createworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateWorkspaceResponse
 * \brief The CreateWorkspaceResponse class provides an interace for IoTTwinMaker CreateWorkspace responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createWorkspace
 */

/*!
 * Constructs a CreateWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkspaceResponse::CreateWorkspaceResponse(
        const CreateWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new CreateWorkspaceResponsePrivate(this), parent)
{
    setRequest(new CreateWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkspaceRequest * CreateWorkspaceResponse::request() const
{
    Q_D(const CreateWorkspaceResponse);
    return static_cast<const CreateWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker CreateWorkspace \a response.
 */
void CreateWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::CreateWorkspaceResponsePrivate
 * \brief The CreateWorkspaceResponsePrivate class provides private implementation for CreateWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateWorkspaceResponsePrivate object with public implementation \a q.
 */
CreateWorkspaceResponsePrivate::CreateWorkspaceResponsePrivate(
    CreateWorkspaceResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker CreateWorkspace response element from \a xml.
 */
void CreateWorkspaceResponsePrivate::parseCreateWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
