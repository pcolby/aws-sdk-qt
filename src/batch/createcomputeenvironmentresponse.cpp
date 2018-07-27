/*
    Copyright 2013-2018 Paul Colby

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

#include "createcomputeenvironmentresponse.h"
#include "createcomputeenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentResponse
 * \brief The CreateComputeEnvironmentResponse class provides an interace for Batch CreateComputeEnvironment responses.
 *
 * \inmodule QtAwsBatch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 *
 * \sa BatchClient::createComputeEnvironment
 */

/*!
 * Constructs a CreateComputeEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComputeEnvironmentResponse::CreateComputeEnvironmentResponse(
        const CreateComputeEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new CreateComputeEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateComputeEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComputeEnvironmentRequest * CreateComputeEnvironmentResponse::request() const
{
    Q_D(const CreateComputeEnvironmentResponse);
    return static_cast<const CreateComputeEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch CreateComputeEnvironment \a response.
 */
void CreateComputeEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComputeEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentResponsePrivate
 * \brief The CreateComputeEnvironmentResponsePrivate class provides private implementation for CreateComputeEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CreateComputeEnvironmentResponsePrivate object with public implementation \a q.
 */
CreateComputeEnvironmentResponsePrivate::CreateComputeEnvironmentResponsePrivate(
    CreateComputeEnvironmentResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch CreateComputeEnvironment response element from \a xml.
 */
void CreateComputeEnvironmentResponsePrivate::parseCreateComputeEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComputeEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
