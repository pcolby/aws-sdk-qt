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

#include "getreplicationjobsresponse.h"
#include "getreplicationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/**
 * @class  GetReplicationJobsResponse
 *
 * @brief  Handles SMS GetReplicationJobs responses.
 *
 * @see    SMSClient::getReplicationJobs
 */

/**
 * @brief  Constructs a new GetReplicationJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReplicationJobsResponse::GetReplicationJobsResponse(
        const GetReplicationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new GetReplicationJobsResponsePrivate(this), parent)
{
    setRequest(new GetReplicationJobsRequest(request));
    setReply(reply);
}

const GetReplicationJobsRequest * GetReplicationJobsResponse::request() const
{
    Q_D(const GetReplicationJobsResponse);
    return static_cast<const GetReplicationJobsRequest *>(d->request);
}

/**
 * @brief  Parse a SMS GetReplicationJobs response.
 *
 * @param  response  Response to parse.
 */
void GetReplicationJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReplicationJobsResponsePrivate
 *
 * @brief  Private implementation for GetReplicationJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReplicationJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReplicationJobsResponse instance.
 */
GetReplicationJobsResponsePrivate::GetReplicationJobsResponsePrivate(
    GetReplicationJobsQueueResponse * const q) : GetReplicationJobsPrivate(q)
{

}

/**
 * @brief  Parse an SMS GetReplicationJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReplicationJobsResponsePrivate::GetReplicationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationJobsResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
