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

#include "listapplicationsresponse.h"
#include "listapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ListApplicationsResponse
 *
 * @brief  Handles CodeDeploy ListApplications responses.
 *
 * @see    CodeDeployClient::listApplications
 */

/**
 * @brief  Constructs a new ListApplicationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListApplicationsResponse::ListApplicationsResponse(
        const ListApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new ListApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationsRequest(request));
    setReply(reply);
}

const ListApplicationsRequest * ListApplicationsResponse::request() const
{
    Q_D(const ListApplicationsResponse);
    return static_cast<const ListApplicationsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy ListApplications response.
 *
 * @param  response  Response to parse.
 */
void ListApplicationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListApplicationsResponsePrivate
 *
 * @brief  Private implementation for ListApplicationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListApplicationsResponse instance.
 */
ListApplicationsResponsePrivate::ListApplicationsResponsePrivate(
    ListApplicationsQueueResponse * const q) : ListApplicationsPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy ListApplicationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListApplicationsResponsePrivate::ListApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationsResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
