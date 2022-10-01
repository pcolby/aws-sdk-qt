// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
