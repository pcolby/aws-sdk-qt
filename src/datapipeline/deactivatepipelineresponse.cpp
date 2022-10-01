// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivatepipelineresponse.h"
#include "deactivatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DeactivatePipelineResponse
 * \brief The DeactivatePipelineResponse class provides an interace for DataPipeline DeactivatePipeline responses.
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
 * \sa DataPipelineClient::deactivatePipeline
 */

/*!
 * Constructs a DeactivatePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
DeactivatePipelineResponse::DeactivatePipelineResponse(
        const DeactivatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new DeactivatePipelineResponsePrivate(this), parent)
{
    setRequest(new DeactivatePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeactivatePipelineRequest * DeactivatePipelineResponse::request() const
{
    Q_D(const DeactivatePipelineResponse);
    return static_cast<const DeactivatePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataPipeline DeactivatePipeline \a response.
 */
void DeactivatePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeactivatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataPipeline::DeactivatePipelineResponsePrivate
 * \brief The DeactivatePipelineResponsePrivate class provides private implementation for DeactivatePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a DeactivatePipelineResponsePrivate object with public implementation \a q.
 */
DeactivatePipelineResponsePrivate::DeactivatePipelineResponsePrivate(
    DeactivatePipelineResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/*!
 * Parses a DataPipeline DeactivatePipeline response element from \a xml.
 */
void DeactivatePipelineResponsePrivate::parseDeactivatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivatePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataPipeline
} // namespace QtAws
