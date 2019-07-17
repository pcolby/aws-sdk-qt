/*
    Copyright 2013-2019 Paul Colby

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

#include "setstatusresponse.h"
#include "setstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::SetStatusResponse
 * \brief The SetStatusResponse class provides an interace for DataPipeline SetStatus responses.
 *
 * \inmodule QtAwsDataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 *
 * \sa DataPipelineClient::setStatus
 */

/*!
 * Constructs a SetStatusResponse object for \a reply to \a request, with parent \a parent.
 */
SetStatusResponse::SetStatusResponse(
        const SetStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new SetStatusResponsePrivate(this), parent)
{
    setRequest(new SetStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetStatusRequest * SetStatusResponse::request() const
{
    Q_D(const SetStatusResponse);
    return static_cast<const SetStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataPipeline SetStatus \a response.
 */
void SetStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataPipeline::SetStatusResponsePrivate
 * \brief The SetStatusResponsePrivate class provides private implementation for SetStatusResponse.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a SetStatusResponsePrivate object with public implementation \a q.
 */
SetStatusResponsePrivate::SetStatusResponsePrivate(
    SetStatusResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * Parses a DataPipeline SetStatus response element from \a xml.
 */
void SetStatusResponsePrivate::parseSetStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataPipeline
} // namespace QtAws
