// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createplacementresponse.h"
#include "createplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementResponse
 * \brief The CreatePlacementResponse class provides an interace for IoT1ClickProjects CreatePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::createPlacement
 */

/*!
 * Constructs a CreatePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePlacementResponse::CreatePlacementResponse(
        const CreatePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new CreatePlacementResponsePrivate(this), parent)
{
    setRequest(new CreatePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePlacementRequest * CreatePlacementResponse::request() const
{
    Q_D(const CreatePlacementResponse);
    return static_cast<const CreatePlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects CreatePlacement \a response.
 */
void CreatePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementResponsePrivate
 * \brief The CreatePlacementResponsePrivate class provides private implementation for CreatePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a CreatePlacementResponsePrivate object with public implementation \a q.
 */
CreatePlacementResponsePrivate::CreatePlacementResponsePrivate(
    CreatePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects CreatePlacement response element from \a xml.
 */
void CreatePlacementResponsePrivate::parseCreatePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
