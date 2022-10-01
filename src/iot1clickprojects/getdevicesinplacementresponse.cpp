// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicesinplacementresponse.h"
#include "getdevicesinplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementResponse
 * \brief The GetDevicesInPlacementResponse class provides an interace for IoT1ClickProjects GetDevicesInPlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::getDevicesInPlacement
 */

/*!
 * Constructs a GetDevicesInPlacementResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicesInPlacementResponse::GetDevicesInPlacementResponse(
        const GetDevicesInPlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new GetDevicesInPlacementResponsePrivate(this), parent)
{
    setRequest(new GetDevicesInPlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicesInPlacementRequest * GetDevicesInPlacementResponse::request() const
{
    Q_D(const GetDevicesInPlacementResponse);
    return static_cast<const GetDevicesInPlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects GetDevicesInPlacement \a response.
 */
void GetDevicesInPlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicesInPlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementResponsePrivate
 * \brief The GetDevicesInPlacementResponsePrivate class provides private implementation for GetDevicesInPlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a GetDevicesInPlacementResponsePrivate object with public implementation \a q.
 */
GetDevicesInPlacementResponsePrivate::GetDevicesInPlacementResponsePrivate(
    GetDevicesInPlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects GetDevicesInPlacement response element from \a xml.
 */
void GetDevicesInPlacementResponsePrivate::parseGetDevicesInPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicesInPlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
