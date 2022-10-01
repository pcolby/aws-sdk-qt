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

#include "stopjobrunresponse.h"
#include "stopjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::StopJobRunResponse
 * \brief The StopJobRunResponse class provides an interace for DataBrew StopJobRun responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::stopJobRun
 */

/*!
 * Constructs a StopJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
StopJobRunResponse::StopJobRunResponse(
        const StopJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new StopJobRunResponsePrivate(this), parent)
{
    setRequest(new StopJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopJobRunRequest * StopJobRunResponse::request() const
{
    Q_D(const StopJobRunResponse);
    return static_cast<const StopJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew StopJobRun \a response.
 */
void StopJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::StopJobRunResponsePrivate
 * \brief The StopJobRunResponsePrivate class provides private implementation for StopJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a StopJobRunResponsePrivate object with public implementation \a q.
 */
StopJobRunResponsePrivate::StopJobRunResponsePrivate(
    StopJobRunResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew StopJobRun response element from \a xml.
 */
void StopJobRunResponsePrivate::parseStopJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
