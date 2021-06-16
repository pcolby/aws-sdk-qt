/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletescheduleresponse.h"
#include "deletescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DeleteScheduleResponse
 * \brief The DeleteScheduleResponse class provides an interace for GlueDataBrew DeleteSchedule responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::deleteSchedule
 */

/*!
 * Constructs a DeleteScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteScheduleResponse::DeleteScheduleResponse(
        const DeleteScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new DeleteScheduleResponsePrivate(this), parent)
{
    setRequest(new DeleteScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteScheduleRequest * DeleteScheduleResponse::request() const
{
    Q_D(const DeleteScheduleResponse);
    return static_cast<const DeleteScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew DeleteSchedule \a response.
 */
void DeleteScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::DeleteScheduleResponsePrivate
 * \brief The DeleteScheduleResponsePrivate class provides private implementation for DeleteScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DeleteScheduleResponsePrivate object with public implementation \a q.
 */
DeleteScheduleResponsePrivate::DeleteScheduleResponsePrivate(
    DeleteScheduleResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew DeleteSchedule response element from \a xml.
 */
void DeleteScheduleResponsePrivate::parseDeleteScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
