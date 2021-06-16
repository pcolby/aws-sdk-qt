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

#include "submitjobresponse.h"
#include "submitjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::SubmitJobResponse
 * \brief The SubmitJobResponse class provides an interace for Batch SubmitJob responses.
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
 * \sa BatchClient::submitJob
 */

/*!
 * Constructs a SubmitJobResponse object for \a reply to \a request, with parent \a parent.
 */
SubmitJobResponse::SubmitJobResponse(
        const SubmitJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new SubmitJobResponsePrivate(this), parent)
{
    setRequest(new SubmitJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SubmitJobRequest * SubmitJobResponse::request() const
{
    Q_D(const SubmitJobResponse);
    return static_cast<const SubmitJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch SubmitJob \a response.
 */
void SubmitJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SubmitJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::SubmitJobResponsePrivate
 * \brief The SubmitJobResponsePrivate class provides private implementation for SubmitJobResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a SubmitJobResponsePrivate object with public implementation \a q.
 */
SubmitJobResponsePrivate::SubmitJobResponsePrivate(
    SubmitJobResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch SubmitJob response element from \a xml.
 */
void SubmitJobResponsePrivate::parseSubmitJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubmitJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
