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

#include "updatescheduleresponse.h"
#include "updatescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateScheduleResponse
 * \brief The UpdateScheduleResponse class provides an interace for DataBrew UpdateSchedule responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateSchedule
 */

/*!
 * Constructs a UpdateScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateScheduleResponse::UpdateScheduleResponse(
        const UpdateScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new UpdateScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateScheduleRequest * UpdateScheduleResponse::request() const
{
    Q_D(const UpdateScheduleResponse);
    return static_cast<const UpdateScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew UpdateSchedule \a response.
 */
void UpdateScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::UpdateScheduleResponsePrivate
 * \brief The UpdateScheduleResponsePrivate class provides private implementation for UpdateScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateScheduleResponsePrivate object with public implementation \a q.
 */
UpdateScheduleResponsePrivate::UpdateScheduleResponsePrivate(
    UpdateScheduleResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew UpdateSchedule response element from \a xml.
 */
void UpdateScheduleResponsePrivate::parseUpdateScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
