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

#include "updatecomputeenvironmentresponse.h"
#include "updatecomputeenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::UpdateComputeEnvironmentResponse
 * \brief The UpdateComputeEnvironmentResponse class provides an interace for Batch UpdateComputeEnvironment responses.
 *
 * \inmodule QtAwsBatch
 *
 *  Using AWS Batch, you can run batch computing workloads on the AWS Cloud. Batch computing is a common means for
 *  developers, scientists, and engineers to access large amounts of compute resources. AWS Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  AWS Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch can run batch computing workloads of any scale. AWS Batch automatically provisions
 *  compute resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With
 *  AWS Batch, there's no need to install or manage batch computing software. This means that you can focus your time and
 *  energy on analyzing results and solving your specific
 *
 * \sa BatchClient::updateComputeEnvironment
 */

/*!
 * Constructs a UpdateComputeEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateComputeEnvironmentResponse::UpdateComputeEnvironmentResponse(
        const UpdateComputeEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new UpdateComputeEnvironmentResponsePrivate(this), parent)
{
    setRequest(new UpdateComputeEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateComputeEnvironmentRequest * UpdateComputeEnvironmentResponse::request() const
{
    return static_cast<const UpdateComputeEnvironmentRequest *>(BatchResponse::request());
}

/*!
 * \reimp
 * Parses a successful Batch UpdateComputeEnvironment \a response.
 */
void UpdateComputeEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateComputeEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::UpdateComputeEnvironmentResponsePrivate
 * \brief The UpdateComputeEnvironmentResponsePrivate class provides private implementation for UpdateComputeEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a UpdateComputeEnvironmentResponsePrivate object with public implementation \a q.
 */
UpdateComputeEnvironmentResponsePrivate::UpdateComputeEnvironmentResponsePrivate(
    UpdateComputeEnvironmentResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch UpdateComputeEnvironment response element from \a xml.
 */
void UpdateComputeEnvironmentResponsePrivate::parseUpdateComputeEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateComputeEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
