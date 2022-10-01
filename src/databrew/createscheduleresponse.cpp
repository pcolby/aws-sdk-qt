// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createscheduleresponse.h"
#include "createscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateScheduleResponse
 * \brief The CreateScheduleResponse class provides an interace for DataBrew CreateSchedule responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createSchedule
 */

/*!
 * Constructs a CreateScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateScheduleResponse::CreateScheduleResponse(
        const CreateScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new CreateScheduleResponsePrivate(this), parent)
{
    setRequest(new CreateScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateScheduleRequest * CreateScheduleResponse::request() const
{
    Q_D(const CreateScheduleResponse);
    return static_cast<const CreateScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew CreateSchedule \a response.
 */
void CreateScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::CreateScheduleResponsePrivate
 * \brief The CreateScheduleResponsePrivate class provides private implementation for CreateScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateScheduleResponsePrivate object with public implementation \a q.
 */
CreateScheduleResponsePrivate::CreateScheduleResponsePrivate(
    CreateScheduleResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew CreateSchedule response element from \a xml.
 */
void CreateScheduleResponsePrivate::parseCreateScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
