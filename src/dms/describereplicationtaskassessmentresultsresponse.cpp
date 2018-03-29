/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereplicationtaskassessmentresultsresponse.h"
#include "describereplicationtaskassessmentresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationTaskAssessmentResultsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationTaskAssessmentResults responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationTaskAssessmentResults
 */

/**
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationTaskAssessmentResultsResponse::DescribeReplicationTaskAssessmentResultsResponse(
        const DescribeReplicationTaskAssessmentResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationTaskAssessmentResultsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTaskAssessmentResultsRequest(request));
    setReply(reply);
}

const DescribeReplicationTaskAssessmentResultsRequest * DescribeReplicationTaskAssessmentResultsResponse::request() const
{
    Q_D(const DescribeReplicationTaskAssessmentResultsResponse);
    return static_cast<const DescribeReplicationTaskAssessmentResultsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeReplicationTaskAssessmentResults response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationTaskAssessmentResultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReplicationTaskAssessmentResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationTaskAssessmentResultsResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationTaskAssessmentResultsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationTaskAssessmentResultsResponse instance.
 */
DescribeReplicationTaskAssessmentResultsResponsePrivate::DescribeReplicationTaskAssessmentResultsResponsePrivate(
    DescribeReplicationTaskAssessmentResultsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeReplicationTaskAssessmentResultsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationTaskAssessmentResultsResponsePrivate::parseDescribeReplicationTaskAssessmentResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTaskAssessmentResultsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
