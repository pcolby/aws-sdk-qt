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

#include "describejobflowsresponse.h"
#include "describejobflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeJobFlowsResponse
 * \brief The DescribeJobFlowsResponse class provides an interace for EMR DescribeJobFlows responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::describeJobFlows
 */

/*!
 * Constructs a DescribeJobFlowsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobFlowsResponse::DescribeJobFlowsResponse(
        const DescribeJobFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeJobFlowsResponsePrivate(this), parent)
{
    setRequest(new DescribeJobFlowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobFlowsRequest * DescribeJobFlowsResponse::request() const
{
    Q_D(const DescribeJobFlowsResponse);
    return static_cast<const DescribeJobFlowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR DescribeJobFlows \a response.
 */
void DescribeJobFlowsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeJobFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::DescribeJobFlowsResponsePrivate
 * \brief The DescribeJobFlowsResponsePrivate class provides private implementation for DescribeJobFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeJobFlowsResponsePrivate object with public implementation \a q.
 */
DescribeJobFlowsResponsePrivate::DescribeJobFlowsResponsePrivate(
    DescribeJobFlowsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR DescribeJobFlows response element from \a xml.
 */
void DescribeJobFlowsResponsePrivate::parseDescribeJobFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobFlowsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
