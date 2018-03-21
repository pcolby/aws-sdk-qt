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

#include "listplatformapplicationsresponse.h"
#include "listplatformapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  ListPlatformApplicationsResponse
 *
 * @brief  Handles SNS ListPlatformApplications responses.
 *
 * @see    SNSClient::listPlatformApplications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPlatformApplicationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new ListPlatformApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListPlatformApplicationsRequest(request));
    setReply(reply);
}

const ListPlatformApplicationsRequest * ListPlatformApplicationsResponse::request() const
{
    Q_D(const ListPlatformApplicationsResponse);
    return static_cast<const ListPlatformApplicationsRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ListPlatformApplications response.
 *
 * @param  response  Response to parse.
 */
void ListPlatformApplicationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPlatformApplicationsResponsePrivate
 *
 * @brief  Private implementation for ListPlatformApplicationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPlatformApplicationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPlatformApplicationsResponse instance.
 */
ListPlatformApplicationsResponsePrivate::ListPlatformApplicationsResponsePrivate(
    ListPlatformApplicationsQueueResponse * const q) : ListPlatformApplicationsPrivate(q)
{

}

/**
 * @brief  Parse an SNS ListPlatformApplicationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPlatformApplicationsResponsePrivate::ListPlatformApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPlatformApplicationsResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
