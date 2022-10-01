// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateplacementresponse.h"
#include "updateplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::UpdatePlacementResponse
 * \brief The UpdatePlacementResponse class provides an interace for IoT1ClickProjects UpdatePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::updatePlacement
 */

/*!
 * Constructs a UpdatePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePlacementResponse::UpdatePlacementResponse(
        const UpdatePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new UpdatePlacementResponsePrivate(this), parent)
{
    setRequest(new UpdatePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePlacementRequest * UpdatePlacementResponse::request() const
{
    Q_D(const UpdatePlacementResponse);
    return static_cast<const UpdatePlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects UpdatePlacement \a response.
 */
void UpdatePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::UpdatePlacementResponsePrivate
 * \brief The UpdatePlacementResponsePrivate class provides private implementation for UpdatePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a UpdatePlacementResponsePrivate object with public implementation \a q.
 */
UpdatePlacementResponsePrivate::UpdatePlacementResponsePrivate(
    UpdatePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects UpdatePlacement response element from \a xml.
 */
void UpdatePlacementResponsePrivate::parseUpdatePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
