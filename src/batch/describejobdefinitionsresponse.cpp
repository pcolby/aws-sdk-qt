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

#include "describejobdefinitionsresponse.h"
#include "describejobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobDefinitionsResponse
 * \brief The DescribeJobDefinitionsResponse class provides an interace for Batch DescribeJobDefinitions responses.
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
 * \sa BatchClient::describeJobDefinitions
 */

/*!
 * Constructs a DescribeJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobDefinitionsResponse::DescribeJobDefinitionsResponse(
        const DescribeJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobDefinitionsRequest * DescribeJobDefinitionsResponse::request() const
{
    Q_D(const DescribeJobDefinitionsResponse);
    return static_cast<const DescribeJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Batch DescribeJobDefinitions \a response.
 */
void DescribeJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Batch::DescribeJobDefinitionsResponsePrivate
 * \brief The DescribeJobDefinitionsResponsePrivate class provides private implementation for DescribeJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a DescribeJobDefinitionsResponsePrivate object with public implementation \a q.
 */
DescribeJobDefinitionsResponsePrivate::DescribeJobDefinitionsResponsePrivate(
    DescribeJobDefinitionsResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * Parses a Batch DescribeJobDefinitions response element from \a xml.
 */
void DescribeJobDefinitionsResponsePrivate::parseDescribeJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Batch
} // namespace QtAws
