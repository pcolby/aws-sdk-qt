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

#include "canceljobresponse.h"
#include "canceljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CancelJobResponse
 * \brief The CancelJobResponse class provides an interace for Batch CancelJob responses.
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
 * \sa BatchClient::cancelJob
 */

/*!
 * Constructs a CancelJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJobResponse::CancelJobResponse(
        const CancelJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new CancelJobResponsePrivate(this), parent)
{
    setRequest(new CancelJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJobRequest * CancelJobResponse::request() const
{
    Q_D(const CancelJobResponse);
    return static_cast<const CancelJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch CancelJob \a response.
 */
void CancelJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::CancelJobResponsePrivate
 * \brief The CancelJobResponsePrivate class provides private implementation for CancelJobResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CancelJobResponsePrivate object with public implementation \a q.
 */
CancelJobResponsePrivate::CancelJobResponsePrivate(
    CancelJobResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch CancelJob response element from \a xml.
 */
void CancelJobResponsePrivate::parseCancelJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
