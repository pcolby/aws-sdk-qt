// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedevicewithplacementresponse.h"
#include "associatedevicewithplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementResponse
 * \brief The AssociateDeviceWithPlacementResponse class provides an interace for IoT1ClickProjects AssociateDeviceWithPlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::associateDeviceWithPlacement
 */

/*!
 * Constructs a AssociateDeviceWithPlacementResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDeviceWithPlacementResponse::AssociateDeviceWithPlacementResponse(
        const AssociateDeviceWithPlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new AssociateDeviceWithPlacementResponsePrivate(this), parent)
{
    setRequest(new AssociateDeviceWithPlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDeviceWithPlacementRequest * AssociateDeviceWithPlacementResponse::request() const
{
    Q_D(const AssociateDeviceWithPlacementResponse);
    return static_cast<const AssociateDeviceWithPlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects AssociateDeviceWithPlacement \a response.
 */
void AssociateDeviceWithPlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDeviceWithPlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementResponsePrivate
 * \brief The AssociateDeviceWithPlacementResponsePrivate class provides private implementation for AssociateDeviceWithPlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a AssociateDeviceWithPlacementResponsePrivate object with public implementation \a q.
 */
AssociateDeviceWithPlacementResponsePrivate::AssociateDeviceWithPlacementResponsePrivate(
    AssociateDeviceWithPlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects AssociateDeviceWithPlacement response element from \a xml.
 */
void AssociateDeviceWithPlacementResponsePrivate::parseAssociateDeviceWithPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDeviceWithPlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
