// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletescheduleresponse.h"
#include "deletescheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteScheduleResponse
 * \brief The DeleteScheduleResponse class provides an interace for DataBrew DeleteSchedule responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteSchedule
 */

/*!
 * Constructs a DeleteScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteScheduleResponse::DeleteScheduleResponse(
        const DeleteScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DeleteScheduleResponsePrivate(this), parent)
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
 * Parses a successful DataBrew DeleteSchedule \a response.
 */
void DeleteScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DeleteScheduleResponsePrivate
 * \brief The DeleteScheduleResponsePrivate class provides private implementation for DeleteScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteScheduleResponsePrivate object with public implementation \a q.
 */
DeleteScheduleResponsePrivate::DeleteScheduleResponsePrivate(
    DeleteScheduleResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DeleteSchedule response element from \a xml.
 */
void DeleteScheduleResponsePrivate::parseDeleteScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
