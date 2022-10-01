// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplacementresponse.h"
#include "deleteplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DeletePlacementResponse
 * \brief The DeletePlacementResponse class provides an interace for IoT1ClickProjects DeletePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::deletePlacement
 */

/*!
 * Constructs a DeletePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlacementResponse::DeletePlacementResponse(
        const DeletePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new DeletePlacementResponsePrivate(this), parent)
{
    setRequest(new DeletePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlacementRequest * DeletePlacementResponse::request() const
{
    Q_D(const DeletePlacementResponse);
    return static_cast<const DeletePlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects DeletePlacement \a response.
 */
void DeletePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::DeletePlacementResponsePrivate
 * \brief The DeletePlacementResponsePrivate class provides private implementation for DeletePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DeletePlacementResponsePrivate object with public implementation \a q.
 */
DeletePlacementResponsePrivate::DeletePlacementResponsePrivate(
    DeletePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects DeletePlacement response element from \a xml.
 */
void DeletePlacementResponsePrivate::parseDeletePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
