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

#include "terminatejobresponse.h"
#include "terminatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::TerminateJobResponse
 * \brief The TerminateJobResponse class provides an interace for Batch TerminateJob responses.
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
 * \sa BatchClient::terminateJob
 */

/*!
 * Constructs a TerminateJobResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateJobResponse::TerminateJobResponse(
        const TerminateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new TerminateJobResponsePrivate(this), parent)
{
    setRequest(new TerminateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateJobRequest * TerminateJobResponse::request() const
{
    Q_D(const TerminateJobResponse);
    return static_cast<const TerminateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch TerminateJob \a response.
 */
void TerminateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::TerminateJobResponsePrivate
 * \brief The TerminateJobResponsePrivate class provides private implementation for TerminateJobResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a TerminateJobResponsePrivate object with public implementation \a q.
 */
TerminateJobResponsePrivate::TerminateJobResponsePrivate(
    TerminateJobResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch TerminateJob response element from \a xml.
 */
void TerminateJobResponsePrivate::parseTerminateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
