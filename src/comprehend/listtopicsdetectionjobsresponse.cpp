/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtopicsdetectionjobsresponse.h"
#include "listtopicsdetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Comprehend {

/**
 * @class  ListTopicsDetectionJobsResponse
 *
 * @brief  Handles Comprehend ListTopicsDetectionJobs responses.
 *
 * @see    ComprehendClient::listTopicsDetectionJobs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTopicsDetectionJobsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListTopicsDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListTopicsDetectionJobsRequest(request));
    setReply(reply);
}

const ListTopicsDetectionJobsRequest * ListTopicsDetectionJobsResponse::request() const
{
    Q_D(const ListTopicsDetectionJobsResponse);
    return static_cast<const ListTopicsDetectionJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend ListTopicsDetectionJobs response.
 *
 * @param  response  Response to parse.
 */
void ListTopicsDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTopicsDetectionJobsResponsePrivate
 *
 * @brief  Private implementation for ListTopicsDetectionJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicsDetectionJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTopicsDetectionJobsResponse instance.
 */
ListTopicsDetectionJobsResponsePrivate::ListTopicsDetectionJobsResponsePrivate(
    ListTopicsDetectionJobsQueueResponse * const q) : ListTopicsDetectionJobsPrivate(q)
{

}

/**
 * @brief  Parse an Comprehend ListTopicsDetectionJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTopicsDetectionJobsResponsePrivate::ListTopicsDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTopicsDetectionJobsResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace AWS
