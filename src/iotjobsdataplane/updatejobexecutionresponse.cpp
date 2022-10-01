// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejobexecutionresponse.h"
#include "updatejobexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::UpdateJobExecutionResponse
 * \brief The UpdateJobExecutionResponse class provides an interace for IoTJobsDataPlane UpdateJobExecution responses.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 *
 *  AWS IoT Jobs is a service that allows you to define a set of jobs — remote operations that are sent to and executed on
 *  one or more devices connected to AWS IoT. For example, you can define a job that instructs a set of devices to download
 *  and install application or firmware updates, reboot, rotate certificates, or perform remote troubleshooting
 * 
 *  operations>
 * 
 *  To create a job, you make a job document which is a description of the remote operations to be performed, and you
 *  specify a list of targets that should perform the operations. The targets can be individual things, thing groups or
 * 
 *  both>
 * 
 *  AWS IoT Jobs sends a message to inform the targets that a job is available. The target starts the execution of the job
 *  by downloading the job document, performing the operations it specifies, and reporting its progress to AWS IoT. The Jobs
 *  service provides commands to track the progress of a job on a specific target and for all the targets of the
 *
 * \sa IoTJobsDataPlaneClient::updateJobExecution
 */

/*!
 * Constructs a UpdateJobExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobExecutionResponse::UpdateJobExecutionResponse(
        const UpdateJobExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTJobsDataPlaneResponse(new UpdateJobExecutionResponsePrivate(this), parent)
{
    setRequest(new UpdateJobExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobExecutionRequest * UpdateJobExecutionResponse::request() const
{
    Q_D(const UpdateJobExecutionResponse);
    return static_cast<const UpdateJobExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTJobsDataPlane UpdateJobExecution \a response.
 */
void UpdateJobExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTJobsDataPlane::UpdateJobExecutionResponsePrivate
 * \brief The UpdateJobExecutionResponsePrivate class provides private implementation for UpdateJobExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a UpdateJobExecutionResponsePrivate object with public implementation \a q.
 */
UpdateJobExecutionResponsePrivate::UpdateJobExecutionResponsePrivate(
    UpdateJobExecutionResponse * const q) : IoTJobsDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTJobsDataPlane UpdateJobExecution response element from \a xml.
 */
void UpdateJobExecutionResponsePrivate::parseUpdateJobExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTJobsDataPlane
} // namespace QtAws
