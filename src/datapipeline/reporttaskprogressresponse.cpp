// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reporttaskprogressresponse.h"
#include "reporttaskprogressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::ReportTaskProgressResponse
 * \brief The ReportTaskProgressResponse class provides an interace for DataPipeline ReportTaskProgress responses.
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
 * \sa DataPipelineClient::reportTaskProgress
 */

/*!
 * Constructs a ReportTaskProgressResponse object for \a reply to \a request, with parent \a parent.
 */
ReportTaskProgressResponse::ReportTaskProgressResponse(
        const ReportTaskProgressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new ReportTaskProgressResponsePrivate(this), parent)
{
    setRequest(new ReportTaskProgressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReportTaskProgressRequest * ReportTaskProgressResponse::request() const
{
    Q_D(const ReportTaskProgressResponse);
    return static_cast<const ReportTaskProgressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataPipeline ReportTaskProgress \a response.
 */
void ReportTaskProgressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReportTaskProgressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataPipeline::ReportTaskProgressResponsePrivate
 * \brief The ReportTaskProgressResponsePrivate class provides private implementation for ReportTaskProgressResponse.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a ReportTaskProgressResponsePrivate object with public implementation \a q.
 */
ReportTaskProgressResponsePrivate::ReportTaskProgressResponsePrivate(
    ReportTaskProgressResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * Parses a DataPipeline ReportTaskProgress response element from \a xml.
 */
void ReportTaskProgressResponsePrivate::parseReportTaskProgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReportTaskProgressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataPipeline
} // namespace QtAws
